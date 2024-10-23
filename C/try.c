#include <stdio.h>

int main() {
    _Bool is_last = 0;
    _Bool is_first = 0;
    int a = (is_last)? (is_first)? 1:-1 : 1;
    printf("%d", a);

    return 0;
}