#include <stdio.h>

void counterFunction() {
    int count = 0; // Initialized only once
    count++;
    printf("Count is: %d\n", count);
}

int main() {
    counterFunction(); // Output: Count is: 1
    counterFunction(); // Output: Count is: 2
    counterFunction(); // Output: Count is: 3
    return 0;
}
