#include <stdio.h>

void _foo(); // forward declaration of the fucntion. letting the complier to know that the function is defined somewhere in the file or may in the another file 

void main(){

    _foo();
}

void _foo(){

    int a = 10, b = 20;
    a = 100;
    printf("A is %d and B is %d \n ", a, b);
    return;

}