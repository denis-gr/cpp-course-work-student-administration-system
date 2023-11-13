#ifndef FILE_HPP
#define FILE_HPP

#include<fstream>

#include "struct.hpp"
#include <sstream>


void saveStudents(StudentList student_list, std::string filename="DB.csv");
StudentList loadStudents(std::string filename="DB.csv");

#endif
