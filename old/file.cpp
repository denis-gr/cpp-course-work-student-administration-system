#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "struct.hpp"

void saveToFile(StudentTList list, std::string filename="DB.csv") {
    std::ofstream file(filename);
    auto pList = &list;
    if (file.is_open()) {
        file << "Id,Name,Surname,Patronymic,Group,Marks1,Marks2,Marks3,Marks4,Marks5\n";
        while (pList != nullptr) {
            file << pList->student.Id << ","
                << pList->student.Name << ","
                << pList->student.Surname << ","
                << pList->student.Patronymic << ","
                << pList->student.Group << ",";
            for (int i = 0; i < 5; ++i) {
                file << pList->student.Marks[i];
                if (i < 4) {
                    file << ",";
                }
            }
            file << "\n";
            pList = pList->pnext;
        }
        file.close();
        std::cout << "Список успешно сохранен в файл " << filename << std::endl;
    }
    else {
        std::cerr << "Не удалось открыть файл для записи" << std::endl;
    }
}

StudentTList loadFromFile(std::string filename = "DB.csv") {
    std::ifstream file(filename);
    StudentTList* pHead = nullptr;
    if (file.is_open()) {
        std::string line;
        // Пропускаем заголовок
        std::getline(file, line);
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string item;
            std::vector<std::string> items;
            while (std::getline(ss, item, ',')) {
                items.push_back(item);
            }
            if(items.size() == 9) {
                STUDENT student;
                student.Id = std::stoi(items[0]);
                student.Name = items[1];
                student.Surname = items[2];
                student.Patronymic = items[3];
                student.Group = items[4];
                for (int i = 0; i < 5; ++i) {
                    student.Marks[i] = static_cast<MARKS>(std::stoi(items[i + 5]));
                }
                StudentTList* pTemp = new StudentTList;
                pTemp->student = student;
                pTemp->pnext = pHead;
                pHead = pTemp;
            }
        }
        file.close();
    } else {
        std::cerr << "Не удалось открыть файл для чтения" << std::endl;
    }
    // Возвращаем указатель на первый элемент списка
    return *pHead;
}
