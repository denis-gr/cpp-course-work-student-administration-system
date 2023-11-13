#include <iostream>

#include "struct.hpp"
#include "console.hpp"
#include "file.hpp"

using namespace std;




int main() {
    StudentList student_list, student_list2;

    try {
        student_list2 = loadStudents();
    } catch (const char* error) {
        std::cout << "Возникла ошибка: " << error << std::endl;
    }
    
    cout << student_list2.to_string();

    student_list.push(
        Student("Григорьев", "Денис", "Викторович", "М211", 5, 5, 5, 5, 5));
    student_list.push(
        Student("Бочковой", "Илья", "Павлович", "М211", 2, 3, 3, 2, 3));


    cout << student_list.to_string() << endl;

    saveStudents(student_list);

    return 0;
}
