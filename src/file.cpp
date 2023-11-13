
#include<fstream>

#include "struct.hpp"
#include <sstream>


void saveStudents(StudentList student_list, std::string filename) {
    std::ofstream fout(filename);
    fout << "№,Name,Surname,Patronymic,Group,Marks1,Marks2,Marks3,Marks4,Marks5\n";
    StudentItem* current = student_list.first;
    int i = 1;
    while (current != nullptr) {
        fout << i << "," << current->value.Name << ","
            << current->value.Surname << "," << current->value.Patronymic << ","
            << current->value.Group << "," << current->value.Marks[0] << "," << 
            current->value.Marks[1] << "," << current->value.Marks[2] << "," << 
            current->value.Marks[3] << "," << current->value.Marks[4] << "\n";
        current = current->pnext;
        i++;
    };
    fout.close();
};

StudentList loadStudents(std::string filename) {
    const std::string correct_first_line("№,Name,Surname,Patronymic,Group,Marks1,Marks2,Marks3,Marks4,Marks5");
    std::ifstream fin(filename);
    char first_line[300], line[300];
    fin.getline(first_line, 256);
    if (std::string(first_line).find(correct_first_line) == std::string::npos) {
        throw "ImportDataError";
    }
    StudentList student_list;
    while (fin.getline(line, 256)) {
        std::stringstream ss(line);
        std::string item;
        char part[50];
        Student student, student2;
        ss.getline(part, 50, ',');
        ss.getline(part, 50, ',');
        student.Name = std::string(part);
        ss.getline(part, 50, ',');
        student.Surname = std::string(part);
        ss.getline(part, 50, ',');
        student.Patronymic = std::string(part);
        ss.getline(part, 50, ',');
        student.Group = std::string(part);
        ss.getline(part, 50, ',');
        student.Marks[0] = std::stoi(std::string(part));
        ss.getline(part, 50, ',');
        student.Marks[1] = std::stoi(std::string(part));
        ss.getline(part, 50, ',');
        student.Marks[2] = std::stoi(std::string(part));
        ss.getline(part, 50, ',');
        student.Marks[3] = std::stoi(std::string(part));
        ss.getline(part, 50, ',');
        student.Marks[4] = std::stoi(std::string(part));
        student2 = Student(student.Surname, student.Name, student.Patronymic,
            student.Group, student.Marks[0], student.Marks[1], student.Marks[2],
            student.Marks[3], student.Marks[4]);
        student_list.push(student2);
    };
    fin.close();
    return student_list;
};
