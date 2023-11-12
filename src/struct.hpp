#ifndef STRUCT_HPP
#define STRUCT_HPP

#include <string>

struct Student {
	unsigned long Id;
	std::string Name;
	std::string Surname;
	std::string Patronymic;
	std::string Group;
	int Marks[5];

    Student() = default;
    Student(std::string surname, std::string name="", 
        std::string patronymic="", std::string group="", int m1=0, int m2=0,
        int m3=0, int m4=0, int m5=0, int id=0);

    std::string to_string();
};

struct StudentTList {
    StudentTList *pnext;
    Student student;
};

#endif
