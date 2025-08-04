#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "include/log.h"

void reverseString(char *string);

int main(){
    char str[100];
    logger("Enter a string to reverse: ", LOG_INPUT);
    fgets(str, sizeof(str), stdin);
    printf("Entered string: %s \n", str);
    reverseString(str);

    
}

void reverseString(char *string){
    int len = strlen(string);
    for (int i = 0; i < len / 2; i++){
        char temp = string[i]; // temp = str[0] 
        string[i] = string[len - i - 1]; // str[0] = str[last_char] and -1 is to get rid of null terminator in strings \0
        string[len - i - 1] = temp; // str[last_char] = str[0]
    }
    printf("reversed string: %s \n", string);
}