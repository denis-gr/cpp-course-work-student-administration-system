#include <iostream>

#include "struct.hpp"
#include "scripts.hpp"
#include "file.hpp"
#include "messages.hpp"

using namespace std;

int main() {
    std::setlocale(LC_ALL, "RUSSIAN");
    StudentList student_list;

    try {
        student_list = loadStudents();
    } catch (const char* error) {
        std::cout << "Возникла ошибка: " << error << std::endl;
        std::cout << "Программа работает, так будто данных нет, файл создаться заново при успешном завешении программы" << error << std::endl;
    }
    
    // student_list.push(
    //     Student("Григорьев", "Д", "В", "М211", 5, 5, 5, 5, 5));
    // student_list.push(
    //     Student("Бочковой", "И", "П", "М211", 2, 3, 3, 2, 3));
    // student_list.push(
    //     Student("Дроздовский", "И", "Д", "М211", 5, 3, 4, 3, 3));
    
    std::cout<< HELLO_MESSAGE << std::endl;

    mainMenu(student_list);
    
    saveStudents(student_list);
    std::cout<< "База данных сохранена" << std::endl;
    
    std::cout<< GODBUY_MESSAGE << std::endl;

    return 0;
}
