#include <string>

bool is_letter(char c) {
    return (c >= 65 & c <= 90) or (c >= 97 & c <= 122);
}


int letter_to_alph(char letter) {
    if (letter > 96) {
        letter -= 32;
    }
    letter -= 64;

    return int(letter);
}


std::string alphabet_position(const std::string& text) {
    std::string alp_text = "";

    for (int i = 0; i < text.size(); ++i) {
        if (is_letter(text[i])) {
            alp_text += std::to_string(letter_to_alph(text[i])) + ' ';
        }
    }
    if (alp_text != "") { alp_text.pop_back(); }


    return alp_text;
}
