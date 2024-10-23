#include <string>

int persistence(long long n, short int i = 0) {
    std::string n_str = std::to_string(n);
    if (n_str.size() == 1) {
        return i;
    }

    int mp = 1;
    for (char n_char : n_str) { mp *= (n_char - '0'); }


    return persistence(mp, i + 1);
}