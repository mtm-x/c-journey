#include <stdio.h>
//Write a program to reverse an integer array

void reverseInteger(int arr[], int length); // prototype

int main(){
    int int_arr [] = {1,2,3,4,5};
    int length = sizeof(int_arr) / sizeof(int_arr[0]);
    reverseInteger(int_arr, length);
    return 0;
}

void reverseInteger(int arr[], int length){

    int temp;
    for ( int i = 0; i < length / 2; i++){

        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}