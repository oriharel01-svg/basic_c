/*------------------------------------------------------
* Filename: max.c
* Description: Program to define two integers and print to console the maximum between them.
* Author: Ori Harel
-------------------------------------------------------*/

#define X_VALUE 4
#define Y_VALUE 6

#include <stdio.h>

int main() {
    int x = X_VALUE;
    int y = Y_VALUE;
    int z = (x < y) * y + (x > y) * x;
    printf("%d", z);

    return 0;

}
