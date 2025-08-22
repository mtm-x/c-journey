/*
    Go through the array, one value at a time.
    For each value, compare the value with the next value.
    If the value is higher than the next one, swap the values so that the highest value comes last.
    Go through the array as many times as there are values in the array.

*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    int arr[5] = {4,2,8,10,2};
    int arr_size = sizeof(arr) / sizeof(int);
    int i, j;

    for (i = 0; i < arr_size; i++){
        bool swap = false;

        for (j = 0; j < arr_size -1; j++){

            if ( arr[j] > arr[j+1]) {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                swap = true;
            }            
        }   

        if (!swap) break;
    }

    for (i = 0; i < arr_size; i++){
        printf("%d \n", arr[i]);
    }
    
    return 0;
}