#include <stdio.h>
#include <stdlib.h>

void safeFree(void **pp) {
    printf("PP: %p\n", pp);
    printf("*PP: %p\n", *pp);

    if (pp != NULL && *pp != NULL) {
        free(*pp);
        *pp = NULL;
    }
}

int main() {
    int *pi;
    pi = (int*) malloc(sizeof(int));
    *pi = 5;

    printf("Before: %p\n", &pi);
    printf("ADRESS FROM MALLOC: %p \n", pi);

    safeFree((void *)&pi);

    printf("ADRESS after free: %p \n", pi);

    return (EXIT_SUCCESS);
}