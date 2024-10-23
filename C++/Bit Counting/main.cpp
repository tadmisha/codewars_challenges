#include <vector>

unsigned int countBits(unsigned long long n) {
    int one_amount = 0;
    while (n != 0) {
        one_amount += n % 2;
        n = n / 2;
    }
    return one_amount;
}
