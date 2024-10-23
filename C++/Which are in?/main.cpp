#include <vector>
#include <string>
#include <algorithm>

class WhichAreIn
{

public:
    static std::vector<std::string> inArray(std::vector<std::string>& array1, std::vector<std::string>& array2) {
        std::vector<std::string> result;

        for (std::string str1 : array1) {
            bool is_part = false;
            for (std::string str2 : array2) {
                if (str2.find(str1) != std::string::npos) {
                    is_part = true;
                }
            }
            if (is_part) {
                result.push_back(str1);
            }
        }

        std::sort(result.begin(), result.end());
        return result;
    }
};