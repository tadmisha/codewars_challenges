#include <string>

int digital_root(int n, short int i = 0)
{
    std::string n_str = std::to_string(n);
    if (n_str.size() == 1) {
        return n;
    }

    int sum = 0;
    for (char n_char : n_str) { sum += (n_char - '0'); }


    return digital_root(sum, i + 1);
}