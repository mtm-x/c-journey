/*
    Go through the array to find the lowest value.
    Move the lowest value to the front of the unsorted part of the array.
    Go through the array again as many times as there are values in the array.

*/

#include <stdio.h>

int main (){

    int arr[5] = { 10, 3, 7, 2, 7};
    int i, j, min_index, min_value;
    int size_arr = sizeof(arr) / sizeof(int);

    for ( i = 0; i < size_arr - 1; i++){

        min_index = i;

        for ( j = i + 1; j < size_arr; j++){

            if ( arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        
        if(min_index != i){
            arr[min_index] = arr[min_index] + arr[i];
            arr[i] = arr[min_index] - arr[i];
            arr[min_index] = arr[min_index] - arr[i];
        }
        
    }

    for ( i = 0; i < size_arr; i++){
        printf("%d \n", arr[i]);
    }


    return 0;
}