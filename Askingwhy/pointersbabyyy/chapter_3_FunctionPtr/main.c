#include <stdio.h>
#include <stdlib.h>

/*Function prototype*/
int square (int num);

/*Function pointer*/
// int (*fptr_s)(int);
typedef int (*fptr_s)(int);


int main (void) {
    fptr_s fptr ;
    fptr = square;
    printf("%d \n", fptr(10));
    return 0;
}

int square ( int num){
    return num*num;
}