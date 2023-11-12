#ifndef CHECK_HPP
#define CHECK_HPP

#include <string>
#include "struct.hpp"

bool checkNumberValue(int value, int max, int min=1, const char message[] = "");
bool checkStringLen(std::string value, int maxLen, int minLen, const char message[] = "");

#endif
