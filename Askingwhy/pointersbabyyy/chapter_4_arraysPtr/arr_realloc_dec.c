#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* trim(char* phrase) {
    char* old = phrase;
    char* new = phrase;
    while(*old == ' ') {
        old++;
    }   
    printf("OLD: %s\n",old);

    while(*old) {
        *(new++) = *(old++);
    }
    *new = 0;
    printf("NEW: %p\n",new);
    printf("P: %p\n",phrase);

    printf("%ld \n", strlen(phrase));
    printf("%ld \n", strlen(phrase));

    return (char*) realloc(phrase,strlen(phrase)+1);

}

int main() {
    char* buffer = (char*)malloc(strlen(" cat")+1);
    strcpy(buffer," cat");
    printf("%s\n",trim(buffer));
}

