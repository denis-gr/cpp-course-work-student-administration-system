#include <iostream>

#include "struct.hpp"
#include "scripts.hpp"
#include "file.hpp"

using namespace std;

int main() {
    StudentList student_list;

    try {
        student_list = loadStudents();
    } catch (const char* error) {
        std::cout << "Возникла ошибка: " << error << std::endl;
    }
    
    /*student_list.push(
        Student("Григорьев", "Денис", "Викторович", "М211", 5, 5, 5, 5, 5));
    student_list.push(
        Student("Бочковой", "Илья", "Павлович", "М211", 2, 3, 3, 2, 3));
    student_list.push(
        Student("Дроздовский", "Иван", "Дмитриевич", "М211", 5, 3, 4, 3, 3));*/
    
    mainMenu(student_list);
    
    saveStudents(student_list);

    return 0;
}
