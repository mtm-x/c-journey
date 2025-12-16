#include <stdio.h>

int main (void) {

    int matrix[2][3] = {{1,2,3},{4,5,6}};

    printf("%p \n", matrix[0]);
    printf("%p \n", &matrix[0][0]);
    printf("%d \n", *matrix[0+1]);

    printf("%ld \n", sizeof(matrix[0]));
    for (int i = 0; i < 2; i++) {

        printf("&matrix[%d]: %p sizeof(matrix[%d]): %ld\n",
        i, &matrix[i], i, sizeof(matrix[i]));
    }
    return 0;
}