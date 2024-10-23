#include <string>

inline bool is_letter(char c) {
    return ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'));
}


inline char to_uppercase(char c) {
    return (c >= 'a') ? c - 32 : c;
}


std::string to_camel_case(std::string text) {
    for (int i = 0; i < text.size(); i++) {
        if (!is_letter(text[i])) {
            text[i + 1] = to_uppercase(text[i + 1]);
            text.erase(i, 1);
            i--;
        }
    }

    return text;
}