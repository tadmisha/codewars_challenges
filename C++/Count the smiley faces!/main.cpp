#include <string>
#include <vector>

bool is_smiley(std::string smiley) {
    short int size = smiley.size();

    char eyes[] = { ':', ';' };
    char noses[] = { '-', '~' };
    char smiles[] = { ')', 'D' };

    if (size < 2 or size > 3) {
        return false;
    }
    else {
        bool is_eye = false;
        for (char eye : eyes) {
            if (eye == smiley[0]) { is_eye = true; }
        }
        if (!is_eye) { return false; }

        bool is_smile = false;
        for (char smile : smiles) {
            if (smile == smiley[size - 1]) { is_smile = true; }
        }
        if (!is_smile) { return false; }

        if (size == 2) { return true; }

        else {
            bool is_nose = false;
            for (char nose : noses) {
                if (nose == smiley[1]) { is_nose = true; }
            }
            if (is_nose) { return true; }
            return false;
        }
    }
}

int countSmileys(std::vector<std::string> arr)
{
    int i = 0;
    for (std::string str : arr) {
        if (is_smiley(str)) { i++; }
    }
    return i;
}