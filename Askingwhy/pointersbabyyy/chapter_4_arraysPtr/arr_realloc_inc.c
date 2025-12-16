#include <stdio.h>
#include <stdlib.h>

char* getLine(void);

int main (void) {
    char* buf = getLine();
    printf("%s \n", buf);
    free(buf);
    return 0;
}


char* getLine(void) {

    const size_t sizeofbuf = 10;
    char* buffer = malloc(sizeofbuf);
    char* cursor = buffer;
    size_t max_size_buf = sizeofbuf;
    size_t length = 0;
    int character;

    if (buffer == NULL) {return NULL;}

    while (1)
    {
        character = getc(stdin);
        if(character == '\n') {break;}

        if(++length >= max_size_buf){
            char* new_realloc_buff = realloc(buffer, max_size_buf += sizeofbuf);
            if(new_realloc_buff == NULL) {free(buffer); return NULL;}

            cursor = new_realloc_buff + ( cursor - buffer);
            buffer = new_realloc_buff;
        }
        *cursor++ = character;
    }
    *cursor = '\0';
    return buffer;
}