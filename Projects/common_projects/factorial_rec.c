#include <stdio.h>
#include <stdint.h>
#include "include/log.h"

int findFactorial(int n){

    if ( n < 0){
        return -1;
    }

    if ( n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n - 1);

}

int main(){

    uint32_t ip_number;
    logger("Enter a positive number to get the factorial of that number! Eazy: ", LOG_INPUT);
    scanf("%d", &ip_number);
    int result = factorial(ip_number);

    if ( result == -1){
        logger("No negative numbers", LOG_ERROR);
    }

    printf("Result: %d \n", result);
    return 0;

}