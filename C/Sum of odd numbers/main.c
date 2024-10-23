#include <inttypes.h>

uint64_t rowSumOddNumbers(uint32_t n)
{   
    int past_chars = (((n+1) * n) / 2) - 1;
    printf("%d", past_chars);

    uint64_t sum = (((2*past_chars)-1) + (2*(past_chars+n-1)-1)) / 2 * n;

    return sum;
}