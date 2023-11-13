#include <iostream>

#include "struct.hpp"

template <typename T>
T inputScalar(T& value, const char prompt[] = "") {
    if (prompt) {
        std::cout << prompt;
    };
    std::cin >> value;
    return value;
};


Student inputStudent() {
    Student student;
    inputScalar(student.Surname, "Фамилия: ");
    inputScalar(student.Name, "Имя: ");
    inputScalar(student.Patronymic, "Отчество: ");
    inputScalar(student.Group, "Группа: ");
    inputScalar(student.Marks[0], "Первая оценка: ");
    inputScalar(student.Marks[1], "Вторая оценка: ");
    inputScalar(student.Marks[2], "Третья оценка: ");
    inputScalar(student.Marks[3], "Четверая оценка: ");
    inputScalar(student.Marks[4], "Пятая оценка: ");
    return Student(student.Surname, student.Name, student.Patronymic,
        student.Group, student.Marks[0], student.Marks[1], student.Marks[2],
        student.Marks[3], student.Marks[4]);
};