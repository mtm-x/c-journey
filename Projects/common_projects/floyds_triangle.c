#include <stdio.h>
#include "include/log.h"

// Write a program to print the Floyd’s triangle

int main(){

    int row, i, j, number = 1;

    logger("Enter Row: ", LOG_INPUT);
    scanf("%d", &row);
    scanf("*c");

    for ( i = 1; i <= row; i++){
        for (j = 1; j <= i; j++){
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}