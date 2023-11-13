#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include <iostream>

#include "struct.hpp"

template <typename T>
T inputScalar(T& value, const char prompt[] = "") {
    if (prompt) {
        std::cout << prompt;
    };
    std::cin >> value;
    return value;
};

Student inputStudent();

#endif
