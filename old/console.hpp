#ifndef STRUCT_HPP
#define STRUCT_HPP

#include <string>
#include "struct.hpp"

template <typename T>
T inputScalar(T &value, const char prompt[] = "");

void printStudents(StudentTList list);

#endif
