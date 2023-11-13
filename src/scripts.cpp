#include <iostream>

#include "struct.hpp"
#include "messages.hpp"
#include "console.hpp"
#include "utils.hpp"

StudentList dellMenu(StudentList& student_list) {
    if (!student_list.is_empty())
        std::cout << PRINT_DELL_START_MESSAGE << student_list.to_string(true);
    else {
        std::cout << PRINT_LIST_EMPTY_MESSAGE;
        return student_list;
    };
    int numMenu = 0;
    inputScalar(numMenu, PRINT_LIST_START2_MESSAGE);
    if (numMenu == 0) return student_list;
    student_list.pop(numMenu - 1);
    return student_list;
};

void viewMenu(StudentList& student_list) {
    StudentList student_list2 = student_list;
    while (true) {
        if (!student_list2.is_empty())
            std::cout << PRINT_LIST_START_MESSAGE << student_list2.to_string(true);
        else
            std::cout << PRINT_LIST_EMPTY_MESSAGE;
        int numMenu = 3;
        inputScalar(numMenu, VIEW_MENU_MESSAGE);
        if (numMenu == 3) {
            student_list2 = filterByGrades(student_list2, 4);
        } else if (numMenu == 2) {
            sortByFullName(student_list2);
        } else if (numMenu == 1) {
            return;
        } else {
            throw INCORRECT_COMAND_MESSAGE;
        };
    } 
};

void mainMenu(StudentList& student_list) {
    while (true) {
        int numMenu = 4;
        inputScalar(numMenu, HELLO_MESSAGE);
        if (numMenu == 1) {
            viewMenu(student_list);
        } else if (numMenu == 2) {
            student_list.push(inputStudentInterative());
        } else if (numMenu == 3) {
            student_list = dellMenu(student_list);
        } else if (numMenu == 4) {
            return;
        } else {
            throw INCORRECT_COMAND_MESSAGE;
        };
    }
};
