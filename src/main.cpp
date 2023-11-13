#include <iostream>

#include "struct.hpp"

using namespace std;






int main() {
    Student student = Student("Григорьев", "Денис", "Викторович", "М211", 5, 5, 5, 5, 5);
    Student student2 = Student("Бочковой", "Илья", "Павлович", "М211", 2, 3, 3, 2, 3);

    cout << student.to_string() << endl;
    cout << student2.to_string() << endl;

    cout << endl;

    StudentList student_list;
    student_list.push(student);
    student_list.push(student2);

    cout << student_list.to_string();


    return 0;
}
