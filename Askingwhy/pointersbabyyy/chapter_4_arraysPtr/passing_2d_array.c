#include <stdio.h>
#include <stdlib.h>

void dips(int (*mat)[5], int rows){
    printf("%d \n", mat[0][1]);
}

void display2DArrayUnknownSize(int *arr, int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", *(arr + (i*cols) + j));
        }
    printf("\n");
    }
}

int main (void) {

    int matrix[2][5] =  {{1,2,3,4,5},
                        {6,7,8,9,10}};

    dips(matrix, 5);
    display2DArrayUnknownSize(*matrix, 2, 5);
    return 0;
}