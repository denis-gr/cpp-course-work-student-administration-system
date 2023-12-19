#include <iostream>
#include <limits>

#include "struct.hpp"
#include "check.hpp"

template <typename T>
T inputScalar(T& value, const char prompt[] = "") {
    if (prompt) {
        std::cout << prompt;
    };
    std::cin >> value;
    while (std::cin.fail() || std::cin.rdbuf()->in_avail() > 1) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error!!! Retry input: ";
        std::cin >> value;
    };
    return value;
};


Student inputStudent() {
    Student student, answer;
    inputScalar(student.Surname, "Фамилия: ");
    if (!isLenInRange(student.Surname, 60, 2)) throw "ValueError (Surname)";
    inputScalar(student.Name, "Первая буква имени: ");
    if (!isLenInRange(student.Name, 2, 1)) throw "ValueError (Name)";
    inputScalar(student.Patronymic, "Первая буква отчетва: ");
    if (!isLenInRange(student.Patronymic, 2, 1)) throw "ValueError (Patronymic)";
    inputScalar(student.Group, "Группа: ");
    if (!is_group(student.Group)) throw "ValueError (Group)";
    inputScalar(student.Marks[0], "Первая оценка: ");
    inputScalar(student.Marks[1], "Вторая оценка: ");
    inputScalar(student.Marks[2], "Третья оценка: ");
    inputScalar(student.Marks[3], "Четверая оценка: ");
    inputScalar(student.Marks[4], "Пятая оценка: ");
    for (int i = 0; i < 5; i++) {
        if (!isInRange(student.Marks[i], 5, 1)) throw "ValueError (Mark)";
    };
    answer =  Student(student.Surname, student.Name, student.Patronymic,
        student.Group, student.Marks[0], student.Marks[1], student.Marks[2],
        student.Marks[3], student.Marks[4]);
    return answer;
};


Student inputStudentInterative() {
    bool flag = true;
    Student student;
    std::string answer;
    while (flag) {
        try {
            student = inputStudent();
            flag = false;
        } catch (const char* error) {
            std::cout << "Возникла ошибка: " << error << std::endl;
            inputScalar(answer, "Вы хотите попробовать ещё раз (Да/Нет): ");
            if (answer.find("Нет") != std::string::npos) {
                flag = true;
                throw "ValueError (Student, user cansel)";
            } 
        }
    };
    if (flag) {
        throw "ValueError (Student)";
    }
    return student;
};

