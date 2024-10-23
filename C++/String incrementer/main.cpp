#include <iostream>
#include <string>

using namespace std;

string incrementString(const string& str)
{
    string new_str = str;
    int len = str.length();

    if (str[len - 1] < 48 || str[len - 1]>57) {
        return new_str + '1';
    }

    if (new_str[len - 1] == '9') {

    }
    new_str[len - 1] += 1;

    return new_str; // you code here
}

int main() {
    cout << incrementString("abc0");

    return 0;
}