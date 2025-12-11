/** 
 * Checks numbers for repeated digits 
 * Enter a number: 28212
 * Repeated digit
 */

#include <stdbool.h>
#include <stdio.h>
#define N 10

int main (void) {

    int digit;
    long n;
    int digit_seen[N] = {false};
    int occ[N] = {0};
    bool repeated_number;
    
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {

            repeated_number = 1;
            printf("%d \n", digit);
            occ[digit] += 1; 
            n /= 10;
            continue;
        }

        digit_seen[digit] = true;
        occ[digit] += 1; 
        n /= 10;
    }
    
    // if (repeated_number){
    //     printf("Repeated Numbers \n");
    // }
    // else printf("No repeated number \n");

    for (int i = 0; i < N; i++){
        printf("%d  ", i);
        printf("%d  ", occ[i]);
    }

    return 0;
}

