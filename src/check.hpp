#ifndef CHECK_HPP
#define CHECK_HPP

#include <string>

template <typename T>
bool isInRange(T value, T max, T min) {
    return (value <= max && value >= min);
};

template <typename T>
bool isLenInRange(T value, int max, int min) {
    return isInRange(int(std::string(value).size()), max, min);
};

std::string normalize_group(const std::string&);
bool is_group(const std::string&);

#endif
