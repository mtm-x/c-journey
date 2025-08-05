#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "include/log.h"

void findVowelsConsonants(char *str); //protype

//Write a program to count the vowels and consonants in the given string.
int main(){

    char *str;
    int size = 100;

    str = (char *)malloc(size*sizeof(char)); // malloc(size*sizeof(char)); retuns a void pointer but our str is char
    /*
    (char *): This is a cast. It explicitly tells the compiler to convert the generic void * pointer returned by malloc 
    into a char * pointer. This matches the type of your str variable.
    */
    logger("Enter a string of chars: ", LOG_INPUT);
    fgets(str, size, stdin);    
    str[strcspn(str, "\n")] = 0;
    findVowelsConsonants(str);

    free(str); // must free and make it to NULL
    str = NULL;
    return 0;

}

void findVowelsConsonants(char *str){

    int vowels = 0, consonants = 0;
    // if i use tolower(str) ----> expected ‘int’ but argument is of type ‘char *’

    for ( int i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]); // tolower only wokrs with single char not the array or pointers
        if (ch >= 'a' && ch <= 'z'){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels ++;
            }
            else consonants++;
        }
    }
    printf("Vowels: %d, consonants: %d \n", vowels, consonants);
}