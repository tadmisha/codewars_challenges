#include <vector>

std::vector<int> move_zeroes(std::vector<int>& input) {
    int z = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 0) {
            input.erase(input.begin() + i);
            z++;
            i--;
        }
    }
    for (int i = 0; i < z; i++) {
        input.push_back(0);
    }
    return input;

}