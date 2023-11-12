#include <string>

bool checkNumberValue(int value, int max, int min=1, const char message[] = "") {
    if ((message) && (value <= max) && (value >= min)) {
        throw message;
    };
    return (value <= max) && (value >= min);
};

bool checkStringLen(std::string value, int maxLen, int minLen, const char message[] = "") {
    return checkNumberValue(value.size(), maxLen, minLen, message);
};
