#include <stdio.h>

int main() {
    int num = 10;
    int multiply;
    int divide;

    // Multiplication by 8 (which is 2^3)
    // Left-shifting by 3 is the same as multiplying by 8
    multiply = num << 8;

    // Division by 4 (which is 2^2)
    // Right-shifting by 2 is the same as integer division by 4
    divide = num >> 1;

    printf("Original number: %d\n", num);
    printf("Multiplying by 8 using left shift (<< 3): %d\n", multiply);
    printf("Dividing by 4 using right shift (>> 2): %d\n", divide);

    return 0;
}