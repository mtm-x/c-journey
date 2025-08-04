#include <stdio.h>

int main(){

    int x = 10;
    printf("x : %d \n", x);
    printf("&x : %p \n", &x);
    printf("*&x : %d \n", *&x); // &x - reference that is address and * dereference it again which is x itself simply *& cancels
    printf("*&*&x : %d \n", *&*&x);

    *&*&*&*&*&x =10;
    printf("*&*&*&*&*&x: %d \n", *&*&*&*&*&x);
}