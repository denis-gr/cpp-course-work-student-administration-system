#include <string>

#include "check.hpp"
#include "struct.hpp"

Student::Student(std::string surname, std::string name, std::string patronymic, 
    std::string group, int m1, int m2, int m3, int m4, int m5, int id) {
    int marks[5] {m1, m2, m3, m4, m5};
    Student student;
    Id = id;
    if (!isLenInRange(name, 50, 3)) throw "ValueError (Name)";
    Name = name;
    if (!isLenInRange(surname, 60, 3)) throw "ValueError (Surname)";
    Surname = surname;
    if (!isLenInRange(patronymic, 50, 3)) throw "ValueError (Patronymic)";
    Patronymic = patronymic;
    if (!isLenInRange(group, 5, 4)) throw "ValueError (Group)";
    Group = group;
    for (int i=0; i < 5; i++) {
        if (!isInRange(marks[i], 5, 1)) throw "ValueError (Mark)";
        Marks[i] = marks[i];
    };
};


std::string Student::to_string() {
    std::string str;
    str += "<Студент ";
    str += std::string(Surname) + " ";
    str += std::string(Name) + " ";
    str += std::string(Patronymic) + " ";
    str += "(" + std::string(Group) + ") ";
    for (int i: Marks) {
        str += std::to_string(i) + " ";
    };
    str += "(" + std::to_string(Id) + ")";
    str += ">";
    return str;
};
