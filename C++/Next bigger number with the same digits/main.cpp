#include <iostream>
#include <cmath>

using namespace std;

long nextBigger(long n) {
    short sym = 1;
    for (; n >= pow(10, sym);sym++) {}
    cout << sym;
    cout << endl << endl << endl;
    //42312
    /*for (int i = sym; i > 0; i--) {
        if (n/pow(10, sym-i)-n/pow(10, i-1)) {

        }
    }*/
    cout << (int)n / pow(10, 2 - 1) - (int)n / pow(10, sym - 2);
    return -1;
}

int main() {
    nextBigger(42312);

    return 0;
}