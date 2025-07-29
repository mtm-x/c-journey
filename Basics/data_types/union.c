#include <stdio.h>

union  myunion_t
{
    int a;
    char b;
};

void main(){

    printf("\n %ld \n", sizeof(union myunion_t)); // the size would be 4 bytes but in case of struct we would got like 8bytes ( with padding )

    // A union allocates memory for only its largest member and all members share that same memory space.

    // Use a union when you need to store different types of data in the same variable, but never at the same time.

}