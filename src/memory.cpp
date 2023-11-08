#include <string>

#include "memory.hpp"

STUDENT createStudent(int id=0, std::string name="", std::string surname="",
    std::string patronymic="", std::string group="",
    MARKS m1=Bad, MARKS m2=Bad, MARKS m3=Bad,
    MARKS m4=Bad, MARKS m5=Bad) {
    STUDENT student = STUDENT();
    student.Id = id;
    student.Name = name;
    student.Surname = surname;
    student.Patronymic = patronymic;
    student.Group = group;
    student.Marks[0] = m1;
    student.Marks[1] = m2;
    student.Marks[2] = m3;
    student.Marks[3] = m4;
    student.Marks[4] = m5;
    return student;
}


STUDENTList createStudentList() {
    STUDENTList answer = STUDENTList();
    answer.pnext = nullptr;
    answer.student = createStudent();
    return answer;
}

STUDENTList pushStudentList(STUDENTList list, STUDENT student) {
    if (list.pnext == nullptr && list.student.Id == 0) { //false student
        list.student = student;
    } else {
        STUDENTList item = STUDENTList();
        item.pnext = nullptr;
        item.student = student;
        list.pnext = &item;
        return item;
    };
    return list;
}

// Боже страшно, как тут появлятьюся и исщають структуры, когда нет явного выделения и освоожения памяти
