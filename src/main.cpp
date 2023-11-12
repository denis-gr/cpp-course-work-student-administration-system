#include <iostream>

#include "struct.hpp"
// #include "memory.hpp"

using namespace std;


int main() {
    Student student = Student("Григорьев", "Денис", "Викторович", "М211", 5, 5, 5, 5, 5);
    cout << student.to_string() << endl;

    return 0;
}
