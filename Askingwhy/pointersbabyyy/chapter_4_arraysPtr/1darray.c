#include <stdio.h>
#include <stdlib.h>

int main (void) {
    printf("%ld", sizeof(int *));
    int* arr[5];
    for (int i = 0; i < 5; i++) {

        arr[i] = (int *)malloc(sizeof(int));
        printf("Values stored in arr[%d]--%p \n",i, arr[i]);
        printf("Address of arr[%d]--%p \n",i, &arr[i]);
    }
    return 0;
}