#include <iostream>

#include "memory.hpp"

int main()
{
    // загрузка студентов
    bool work = true;
    do { // Главный цикл обработки запросов от пользователя
        int numMemu = 4;
        std::cout << "Макет 2\n";
        std::cin >> numMemu;
        if (numMemu == 1) {
            bool workSubMenu = true;
            do {
                std::cout << "Макет 9\n";
                int numSubMemu = 1;
                if (numSubMemu == 1) {
                    workSubMenu = false;
                } else if (numSubMemu = 2) {
                    // сортировка студентов
                } else if (numSubMemu = 3) {
                    // фильтрация студентов
                } else {
                    std::cout << "Несуществующий пункт меню";
                };
            } while (workSubMenu);
        } else if (numMemu == 2) {
            std::string Surname;
            std::cout << "";
            std::cin >> Surname;
            if (true /*проверка*/) {
                std::cout << "";
            } else {
                std::cout << "";
            };
            
            std::string Name;
            std::cout << "";
            std::cin >> Name;
            if (true /*проверка*/) {
                std::cout << "";
            } else {
                std::cout << "";
            };

            
            std::string Patronymic;
            std::cout << "";
            std::cin >> Patronymic;
            if (true /*проверка*/) {
                std::cout << "";
            } else {
                std::cout << "";
            };

            
            std::string Group;
            std::cout << "";
            std::cin >> Surname;
            if (true /*проверка*/) {
                std::cout << "";
            } else {
                std::cout << "";
            };

            
            int Marks1, Marks2, Marks3, Marks4, Marks5;
            std::cout << "";
            std::cin >> Marks1 >> Marks2 >> Marks3 >> Marks4 >> Marks5;
            if (true /*проверка*/) {
                std::cout << "";
            } else {
                std::cout << "";
            };

            // создание студента

            if (true /*проверка на уникальность*/) {
                std::cout << "";
            } else {
                std::cout << "";
            };

            // добавления студента в список

            std::cout << "";

        } else if (numMemu == 3) {
            int studentPosion = 0;
            std::cout << "";
            std::cin >> studentPosion;
            if (true /*проверка на возможность выполнения*/) {
                // удаление студента
                std::cout << "";
            } else {
                std::cout << "";
            };
        } else if (numMemu == 4) {
            std::cout << "Завешение работы";
            work = false;
        } else {
            std::cout << "Несуществующий пункт меню";
        };
    } while (work);
    // сохранение стундетов
}
