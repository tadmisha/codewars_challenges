#include <string>


std::string cleanString(const std::string& s) {
    std::string proc_string;
    short int backspaces = 0;
    for (int i = s.length() - 1; i != -1; i--) {
        if (s[i] == '#') {
            backspaces++;
            continue;
        }
        if (backspaces) {
            backspaces--;
        }
        else {
            proc_string.insert(0, 1, s[i]);
        }

    }
    return proc_string;
}