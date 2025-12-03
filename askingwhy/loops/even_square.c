/**
 * Write a program that prompts the user to enter a number n, then prints all even squares
between 1 and n. For example, if the user enters 100, the program should print the follow-
ing:
 */

#include<stdio.h>

int main (void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int i;
    for ( i=1 ; i*i < num; i++) {
        if (i % 2 == 0){
            printf("%d \n", i*i);
        }
    }
    return 0;
}