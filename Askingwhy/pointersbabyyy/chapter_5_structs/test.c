#include <stdio.h>

int main(void) {

    // union test
    // {
    //     int i;
    //     char c;
    // };

    // union test t1 = {.i = 65};

    // printf("%c \n", t1.c);
    
    typedef struct {
        enum {INT_KIND, DOUBLE_KIND} kind;
        union {
        int i;
        double d;
        } u;
    } Number;

    Number n;

    struct x{ 
        int x, y; 
    } ;
    struct { int x, y; } y;

    struct x x = {.x = 4};

    printf("%d",  x.x);
    return 0;

}