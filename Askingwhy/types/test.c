#include <stdio.h>

int main (void) {
    signed int i = -10;
    unsigned int a = 10;

    printf("Is i < a? Result: %d \n", i < a);

    printf("Value of i as unsigned: %u\n", (unsigned int)i);

    return 0;
}