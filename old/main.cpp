#include <iostream>

#include "memory.hpp"
#include "console.hpp"
#include "struct.hpp"
#include "utils.hpp"

int main()
{
    // загрузка студентов
    StudentTList student_list;
    bool work = true;
    do { // Главный цикл обработки запросов от пользователя
        int numMemu = 4;
        inputScalar(numMemu, HELLO_MESSAGE);
        std::cout << numMemu << endl;
        // if (numMemu == 1) {
        //     bool workSubMenu = true;
        //     do {
        //         printStudents(student_list)
        //         int numSubMemu = 1;
        //         inputScalar(numSubMemu, VIEW_MENU_MESSAGE);
        //         if (checkNumberValue(numSubMemu, 3)) {

        //         } else {

        //         };
                
        //         if (numSubMemu == 1) {
        //             workSubMenu = false;
        //         } else if (numSubMemu == 2) {
        //             student_list = sortByFullName(student_list);
        //         } else if (numSubMemu == 3) {
        //             student_list = sortByFullName(filterByGrades);
        //         };
        //     } while (workSubMenu);
        // } else if (numMemu == 2) {
        //     std::string Surname;
        //     std::cout << "";
        //     std::cin >> Surname;
        //     if (true /*проверка*/) {
        //         std::cout << "";
        //     } else {
        //         std::cout << "";
        //     };
            
        //     std::string Name;
        //     std::cout << "";
        //     std::cin >> Name;
        //     if (true /*проверка*/) {
        //         std::cout << "";
        //     } else {
        //         std::cout << "";
        //     };

            
        //     std::string Patronymic;
        //     std::cout << "";
        //     std::cin >> Patronymic;
        //     if (true /*проверка*/) {
        //         std::cout << "";
        //     } else {
        //         std::cout << "";
        //     };

            
        //     std::string Group;
        //     std::cout << "";
        //     std::cin >> Surname;
        //     if (true /*проверка*/) {
        //         std::cout << "";
        //     } else {
        //         std::cout << "";
        //     };

            
        //     int Marks1, Marks2, Marks3, Marks4, Marks5;
        //     std::cout << "";
        //     std::cin >> Marks1 >> Marks2 >> Marks3 >> Marks4 >> Marks5;
        //     if (true /*проверка*/) {
        //         std::cout << "";
        //     } else {
        //         std::cout << "";
        //     };

        //     // создание студента

        //     if (true /*проверка на уникальность*/) {
        //         std::cout << "";
        //     } else {
        //         std::cout << "";
        //     };

        //     // добавления студента в список

        //     std::cout << "";

        // } else if (numMemu == 3) {
        //     int studentPosion = 0;
        //     std::cout << "";
        //     std::cin >> studentPosion;
        //     if (true /*проверка на возможность выполнения*/) {
        //         // удаление студента
        //         std::cout << "";
        //     } else {
        //         std::cout << "";
        //     };
        // } else if (numMemu == 4) {
        //     std::cout << "Завешение работы";
        //     work = false;
        // } else {
        //     std::cout << "Несуществующий пункт меню";
        // };
    } while (work);
    // сохранение стундетов
}
