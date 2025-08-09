#include <stdio.h>
#include <malloc.h> // or stdlib

int main(){

    char *p[10];
    int i = 0;
    printf("p: %p \n", p);

    for ( i ; i < 10; i++){

        p[i] = (char *)malloc(sizeof(char)); // allocate memory dynamically from the heap and returns the void pointer ans we are converting it into char * 
        *p[i] = 10 - i;
        printf("p[%d] = %p \n", i, p[i]);

    }

    for ( i = 0 ; i < 10; i++){
        printf("*p[%d] = %d \n", i, *p[i]);
    }

    for ( i ; i < 10; i++){
        free(p[i]); // must free the allocated memory
        p[i] = NULL;
    }
    printf("%p \n", p);
}