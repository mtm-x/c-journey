#include <stdio.h>


int main (void) {

    int num, result;
    printf("Enter a number : ");
    scanf("%d", &num);

    /**
     * Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10
     * is the last digit in n and n / 10 is n with the last digit removed
     */

    result = num / 10;    
    printf("%d%d", num % 10, result % 10);
   
    result = result / 10;
    printf("%d \n", result);
    return 0;
}