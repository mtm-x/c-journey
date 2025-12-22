#include <stdio.h>

int main (void) {

    int i = 0b11110011;
    i &= (0b1111 << 2);

    printf("%d \n", i);
    printf("%b \n", i);

    return 0;
}