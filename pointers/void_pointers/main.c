#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 10;
    void *ptr = &i;
    int *pi = &i;

    printf("*ptr %d \n",   *pi); // incase of integer pointer it knows it need to go the address and fetech the 4 bytes of data but in void no way to know 

    // printf("*ptr %d",  *ptr);  wont work beacuse of %d expects int or int* but we are passing void *
    printf("*ptr %d \n",   *(int*)ptr); // typecasted  
    return 0;
}