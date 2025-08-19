#include <stdio.h>

int main(){
    
    char arr[2][2] = {
        {'A', 'B'},
        {'C', 'D'}
        }; // A B are the first row that is
    /*
    arr[0][0] = A
    arr[0][1] = B
    arr[1][0] = C
    arr[1][1] = D
    
    */
    int i = 0;
    int j = 0;

    for (i = 0; i < sizeof(arr) / 2; i++){
        for (j = 0; j < sizeof(arr) / 2; j++){  // resetting the vars i and j to 0 is crucial
            printf("%c \n", arr[i][j]);
            printf("arr[%i] : %p \n",i, &arr[i][j]);
        }
    }
    

    return 0;
}