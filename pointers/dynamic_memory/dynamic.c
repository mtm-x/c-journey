#include <stdio.h>
#include <stdlib.h>

int main(){

    int *pInteger = (int *)malloc(1000000000);
    printf("POINTER: %p \n", pInteger);

    printf("BEFORE: %d \n", *pInteger);
    *pInteger = 10;
    printf("AFTER: %d \n", *pInteger);

    free(pInteger);
    //never do double free(pInteger)

    *pInteger = 1; // Dangling pointer

    // Good pratice is to

    pInteger = NULL;

    printf("POINTER: %p \n", pInteger); // pInteger is still holding the address but the heap doesnt have anything for once after freeing it
    printf("AFTER: %d \n", *pInteger); // simply segmentation fault since we already did free(pInteger)

}