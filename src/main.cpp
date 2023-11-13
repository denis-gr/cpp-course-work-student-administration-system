#include <iostream>

#include "struct.hpp"
#include "console.hpp"

using namespace std;



int main() {
    StudentList student_list;
    student_list.push(
        Student("Григорьев", "Денис", "Викторович", "М211", 5, 5, 5, 5, 5));
    student_list.push(
        Student("Бочковой", "Илья", "Павлович", "М211", 2, 3, 3, 2, 3));


    cout << student_list.to_string() << endl;

    inputStudentInterative();

    return 0;
}
