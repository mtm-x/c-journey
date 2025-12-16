#include <stdio.h>
#include <stdlib.h>

int main (void) {
    
    int matrix[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

    printf("Size of Matrix: %ld \n", sizeof(matrix));
    printf("*(matrix): %p \n", *(matrix));
    printf("matrix[0]: %d \n", **(matrix+1));
    printf("matrix[0]: %d \n", *(matrix[1]));

    // for(int i=0; i<2; i++) {
    //     for(int j=0; j<5; j++) {
    //         printf("matrix[%d][%d] Address: %p Value: %d\n",
    //         i, j, &matrix[i][j], matrix[i][j]);
    //     }
    // }

    int (*pmatrix)[5] = matrix;
    printf("%d \n", **pmatrix);

    return 0;
}