#include <string>
#include "struct.hpp"


STUDENT createStudent(int id, std::string, std::string, std::string, 
    std::string, MARKS, MARKS, MARKS, MARKS, MARKS);

STUDENTList createStudentList();

STUDENTList pushStudentList(STUDENTList, STUDENT);
