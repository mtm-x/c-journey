#include <stdio.h>
#include <stdlib.h> // for malloc
#include "include/log.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void checkPallindrome(char *str);

//to check if a string is a palindrome
int main (){

    char *str;
    int size = 50; //allocating 100 chars for the string

    //manually allocating using malloc
    // str is holding the address of the 1st byte of the memory block
    str = (char *)malloc(size); // size * sizeof(char) which is 1 * 100 so i kept size malloc(size) simply returns void pointer but str is char pointer so casted the void to char
    logger("Enter a string to check it is a pallindrome or not: ", LOG_INPUT);
    fgets(str, size, stdin);
    printf("%s", str);
    str[strcspn(str, "\n")] = 0;  // fgets even take \n
    checkPallindrome(str);
    free(str);
    str = NULL;
    return 0;
}


void checkPallindrome(char *str){
    int length = strlen(str);
    int i = 0;
    bool is_palindrom = true;

    for (i; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])){
            is_palindrom = false;
            break;
        }
    }

    if ( is_palindrom == true){
        logger("The given string is Pallindrome!!", LOG_OUTPUT);
    }
    else{
        logger("The given string is not Pallindrome!!", LOG_OUTPUT);
    }
}