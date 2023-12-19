#include <string>
#include <iostream>
#include <regex>

template <typename T>
bool isInRange(T value, T max, T min) {
    return (value >= max && value <= min);
};

template <typename T>
bool isLenInRange(T value, int max, int min) {
    return isInRange(int(std::string(value).size()), max, min);
};

std::string normalize_group(const std::string& text_const) {
    std::string text = std::string(text_const);
    int curr;
    curr = text.find("КСВ");
    if (curr != -1) text.replace(curr, 6, std::string("KCB"));
    curr = text.find("КС");
    if (curr != -1) text.replace(curr, 4, std::string("KC"));
    curr = text.find("КВ");
    if (curr != -1) text.replace(curr, 4, std::string("KB"));
    curr = text.find("МК");
    if (curr != -1) text.replace(curr, 4, std::string("MK"));
    curr = text.find("М");
    if (curr != -1) text.replace(curr, 2, std::string("M"));
    curr = text.find("А");
    if (curr != -1) text.replace(curr, 2, std::string("A"));
    curr = text.find("В");
    if (curr != -1) text.replace(curr, 2, std::string("B"));
    curr = text.find("И");
    if (curr != -1) text.replace(curr, 2, std::string("N"));
    curr = text.find("К");
    if (curr != -1) text.replace(curr, 2, std::string("K"));
    return text;
}

bool is_group(const std::string& text_const) {
    std::regex pattern("^(A|B|N)?[0-9M]{2}[0-9]{2}(M|KC|KB|KCB|K|MK)?$");
    std::string text = normalize_group(text_const);
    return std::regex_match(text, pattern);
}
