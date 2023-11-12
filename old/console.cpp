#include <iostream>
#include "struct.hpp"

const auto HELLO_MESSAGE = "Здравствуйте, вас приветствует программа управления студентами!\n\nЧто вы хотите сделать?\n\n1. Посмотреть студентов\n2. Добавить студента\n3. Удалить студента\n4. Выйти из программы\n\nВаш ответ: ";
const auto VIEW_MENU_MESSAGE = "Что вы хотите сделать?\n\n1. Вернуться в главное меню\n2. Поменять сортировку (доступны сортировки по возрастанию ФИО и среднему баллу)\n3. Убрать студентов, чьи оценки ниже 4\n\nВаш ответ: ";
const auto PRINT_LIST_START_MESSAGE = "Все студенты:\n\n№	ФИО	Группа	Оценки\n";
const auto PRINT_LIST_EMPTY_MESSAGE = "Список студентов пуст...\n";


template <typename T>
T inputScalar(T& value, const char prompt[] = "") {
    if (prompt) {
        std::cout << prompt;
    };
    std::cin >> value;
    return value;
};


void printStudents(StudentTList list) {
    std::cout << PRINT_LIST_START_MESSAGE;
    int i = 1;
    while (list.pnext != nullptr && list.student.Id != 0) {
        std::cout << i << ".\t" << list.student.Surname << " " ;
        std::cout << list.student.Name << ". " <<  list.student.Patronymic;
        std::cout << ".\t" << list.student.Group << "\t";
        std::cout << list.student.Marks[0] << list.student.Marks[1];
        std::cout << list.student.Marks[2] << list.student.Marks[3];
        std::cout << list.student.Marks[4];
        i++;
    };
    if (i == 1) {
        std::cout << PRINT_LIST_EMPTY_MESSAGE;
    };
};

void printStudents(StudentTList* list) {
    while (list != nullptr) {
        std::cout << "ID: " << list->student.Id << "\n"
            << "Name: " << list->student.Name << "\n"
            << "Surname: " << list->student.Surname << "\n"
            << "Patronymic: " << list->student.Patronymic << "\n"
            << "Group: " << list->student.Group << "\n"
            << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            std::cout << static_cast<int>(list->student.Marks[i]) << " ";
        }
        std::cout << "\n\n";
        list = list->pnext;
    }
}




