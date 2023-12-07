#include <string>

#include "check.hpp"
#include "struct.hpp"

Student::Student(std::string surname, std::string name, std::string patronymic, 
    std::string group, int m1, int m2, int m3, int m4, int m5) {
    int marks[5] { m1, m2, m3, m4, m5 };
    Student student;
    if (!isLenInRange(name, 2, 1)) throw "ValueError (Name)";
    Name = name;
    if (!isLenInRange(surname, 60, 2)) throw "ValueError (Surname)";
    Surname = surname;
    if (!isLenInRange(patronymic, 2, 1)) throw "ValueError (Patronymic)";
    Patronymic = patronymic;
    if (!isLenInRange(group, 5, 4)) throw "ValueError (Group)";
    Group = group;
    for (int i=0; i < 5; i++) {
        if (!isInRange(marks[i], 5, 1)) throw "ValueError (Mark)";
        Marks[i] = marks[i];
    };
};


std::string Student::to_string(bool is_list) {
    std::string str;
    str += !is_list ? "<Студент " : "";
    str += std::string(Surname) + " ";
    str += std::string(Name) + " ";
    str += std::string(Patronymic) + " ";
    str += "(" + std::string(Group) + ") ";
    for (int i: Marks) {
        str += std::to_string(i) + " ";
    };
    str += !is_list ? ">" : "";
    return str;
};

void StudentList::push(Student student) {
    first = new StudentItem(student, first);
};

void StudentList::pop(int value) {
    if (value == 0) {
        first = first->pnext; 
        return;    
    };
    StudentItem* current = first;
    for (int i = 0; i < value - 1; i++) {
        if ((current->pnext == nullptr) ||
            (current->pnext)->pnext == nullptr) return;
        current = current->pnext;
    };
    current->pnext = (current->pnext)->pnext;
};

bool StudentList::is_empty() {
    return first == nullptr;
};

std::string StudentList::to_string(bool is_list) {
    std::string str = "";
    int i = 1;
    StudentItem* current = first;
    while (current != nullptr) {
        str += is_list ? std::to_string(i) + ".\t" : "";
        str += (current->value).to_string(is_list) + "\n";
        current = current->pnext;
        i++;
    };
    return str;
};
