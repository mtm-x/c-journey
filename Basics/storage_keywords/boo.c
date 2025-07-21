#include <stdio.h>

extern int a;
void foo();

void main(){
    printf(" %d ", a);

    foo();
    foo();
    foo();
    
}