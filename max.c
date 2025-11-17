

#include <stdio.h>

int main() {
    int x = 4;
    int y = 6;
    int z = (x < y) * y + (x > y) * x;
    printf("%d", z);

    return 0;
}