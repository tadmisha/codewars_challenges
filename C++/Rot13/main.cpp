#include <string>

using namespace std;

string rot13(string msg)
{
    string msg13;
    for (char let : msg) {
        if (!((let > 64 & let < 91) or (let > 96 & let < 123))) {
            msg13 += let;
            continue;
        }
        int let13 = let + 13;
        if (let < 91) {
            if (let13 > 90) {
                let13 = let13 - 91 + 65;
            }
        }
        else {
            if (let13 > 122) {
                let13 = let13 - 123 + 97;
            }
        }
        msg13 += let13;
    }
    return msg13;
}