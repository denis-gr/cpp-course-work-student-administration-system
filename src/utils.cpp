#include <string>

#include "struct.hpp"
#include "check.hpp"

StudentList filterByGrades(StudentList list, int min, int max) {
    StudentList new_list;
    StudentItem* current = list.first;
    while (current != nullptr) {
        int minn = current->value.Marks[0];
        int maxx = current->value.Marks[0];
        for (int i = 0 + 1; i < 5; i++) {
            if (minn > current->value.Marks[i])
                minn = current->value.Marks[i];
            if (maxx < current->value.Marks[i])
                maxx = current->value.Marks[i];
        };
        if (isInRange(minn, max, min) && isInRange(maxx, max, min))
            new_list.push(current->value);
        current = current->pnext;
    };
    return new_list;
};

void sortByFullName(StudentList list) {
    std::string i_name, j_name; 
    Student temp;
    StudentItem* i = list.first;
    while (i != nullptr) {
        StudentItem* j = i;
        while (j != nullptr) {
            i_name = i->value.Surname + i->value.Name + i->value.Patronymic;
            j_name = j->value.Surname + j->value.Name + j->value.Patronymic;
            if (i_name > j_name) {
                temp = i->value;
                i->value = j->value;
                j->value = temp;
            };
            j = j->pnext;
        };
        i = i->pnext;
    };
};

