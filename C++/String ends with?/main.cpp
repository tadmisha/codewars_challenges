#include <string>

bool solution(std::string const& str, std::string const& ending) {
    int str_size = str.length();
    int ending_size = ending.length();

    bool is_ending = true;

    for (int i = 0; i < ending_size; ++i) {
        if (str[str_size - 1 - i] != ending[ending_size - 1 - i]) {
            is_ending = false;
            break;
        }
    }

    return is_ending;
}
