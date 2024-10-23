#include <string>
#include <cmath>

class DigPow {
public:
    static int digPow(int n, int p) {
        std::string n_str = std::to_string(n);

        int result = 0;

        for (int i = 0; i < n_str.length(); i++) {
            result += std::pow((n_str[i] - '0'), (p + i));
        }

        float k = static_cast<float>(result) / n;
        if (k != int(k)) { k = -1; }

        return k;
    }
};
