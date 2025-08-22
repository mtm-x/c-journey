/*
    Take the first value from the unsorted part of the array.
    Move the value into the correct place in the sorted part of the array.
    Go through the unsorted part of the array again as many times as there are values.


    An array with values to sort.
    An outer loop that picks a value to be sorted. For an array with n
    values, this outer loop skips the first value, and must run n−1
    times.
    An inner loop that goes through the sorted part of the array, to find where to insert the value. If the value to be sorted is at index i
    , the sorted part of the array starts at index 0 and ends at index i−1.

*/

#include <stdio.h>


int main(){

    int arr[5] = { 2, 5, 1, 10, 3};
    int i, j, key;
    int size_arr = sizeof(arr) / sizeof(int);

    for (i = 1; i < size_arr; i++){

       key = arr[i]; // this is the one going to be inserted in the sorted region

       j = i-1; // j and its loop only handles the sorted sub array

       while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j]; //alot of shits happening in this loop
            j = j -1;
       }

       arr[j + 1] = key;
        
    }
    for ( i = 0; i < size_arr; i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}