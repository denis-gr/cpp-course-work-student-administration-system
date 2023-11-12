#include <string>
#include "struct.hpp"


STUDENT createStudent(int id, std::string, std::string, std::string, 
    std::string, MARKS, MARKS, MARKS, MARKS, MARKS);

StudentTList createStudentTList();

StudentTList pushStudentTList(StudentTList, STUDENT);

