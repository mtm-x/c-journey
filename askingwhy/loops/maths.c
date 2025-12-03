/*
The value of the mathematical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3! + …
Write a program that approximates e by computing the value of
1 + 1/1! + 1/2! + 1/3! + … + 1/n!
where n is an integer entered by the user.
*/

#include <stdio.h>

int main (void) {

    int num, fact_result = 1;
    float result = 1.0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
         
        for (int j = i; j >= i ; j--){
            fact_result *= j;
        }
        printf("Factorial: %d \n", fact_result);
        
        result = result + 1.0/(fact_result);
    }   

    printf("%f \n", result);
    return 0;
}