#include <stdio.h>

int main(){

    /* &a - refernce
    *ptr - derefernce*/

    int a = 2;
    int b = 3;

    int *ptr;
    ptr = &a;
    int *ptr1;
    ptr1 = &b;

    int x = b & (*ptr); // int x = b & (ptr); ---> a pointer and variable cannot do & 
    int y = *ptr1 & *ptr; // this can be done but not with address like ptr & ptr1

    printf("%p", ptr);

    b = 0xff;
    int z = b & (int)(ptr); //here normally ptr is int* and b is int so &(and) is not possible but here we externally mentioned as (int) so it takes as int & int with warnings

    printf("%d \n", x);
    printf("%d \n", y);

    // Multiplication

    int aws = a **ptr; // a x *ptr(2) = 4 but a*ptr is not possible which is multiplication of int and int*
    printf("%d \n", aws);

    return 0;
}