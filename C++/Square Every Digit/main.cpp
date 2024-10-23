#include <string>

int square_digits(int num) {
    std::string num_str = std::to_string(num);
    std::string result;

    for (char num_char : num_str) {
        result += std::to_string((num_char - '0') * (num_char - '0'));
    }

    return std::stoi(result);
}
