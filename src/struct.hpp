#ifndef STRUCT_HPP
#define STRUCT_HPP

#include <string>

struct Student {
	std::string Name;
	std::string Surname;
	std::string Patronymic;
	std::string Group;
	int Marks[5];

    Student() = default;
    Student(std::string surname, std::string name="", 
        std::string patronymic="", std::string group="", int m1=0, int m2=0,
        int m3=0, int m4=0, int m5=0);

    std::string to_string(bool=false);
};

struct StudentItem {
    StudentItem *pnext;
    Student value;

    StudentItem() : pnext(nullptr), value(nullptr) {};
    StudentItem(Student value) : pnext(nullptr), value(value) {};
    StudentItem(Student value, StudentItem *pnext) : pnext(pnext), value(value) {};
};


struct StudentList {
    StudentItem *first;

    StudentList() : first(nullptr) {};

    void push(Student student);
    void pop(int value);
    bool is_empty();
    std::string to_string(bool=false);
};

#endif
