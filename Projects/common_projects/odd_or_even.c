#include <stdio.h> //checks for default path
#include <stdint.h>
#include "include/log.h" //relative path

int main(){

    int32_t random_number;
    logger("Enter a number to check ODD / EVEN: ", LOG_INPUT);
    scanf("%d", &random_number);

    if ( random_number % 2 == 0){
        logger("EVEN", LOG_OUTPUT);
    }
    else{
        logger("ODD", LOG_OUTPUT);
    }
}