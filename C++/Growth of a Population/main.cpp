#include <vector>
#include <algorithm>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> sorted_array;

        std::vector<int> odds;
        std::vector<int> odd_idxs;
        std::vector<int> evens;
        std::vector<int> even_idxs;

        bool is_even;

        for (int idx = 0; idx < array.size(); idx++) {
            sorted_array[idx] = -1;

            is_even = (array[idx] % 2 == 0);
            if (is_even) {
                odds.insert(odds.end(), array[idx]);
                odd_idxs.insert(odd_idxs.end(), idx);
            }
            else {
                evens.insert(evens.end(), array[idx]);
                even_idxs.insert(even_idxs.end(), idx);
            }
        }

        std::sort(odds.begin(), odds.end());

        for (int idx = 0; idx < odds.size(); idx++) {
            sorted_array[odd_idxs[idx]] = odds[idx];
        }
        for (int idx = 0; idx < evens.size(); idx++) {
            sorted_array[even_idxs[idx]] = evens[idx];
        }

        return sorted_array;
    }
};
