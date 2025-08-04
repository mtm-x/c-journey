#include <stdio.h>

int main(){

    char *name_ptr = "THAMARAI";
    char name_array[] = "thamarai";

    /*
    %s instructs the function to interpret the corresponding argument as a pointer to the first character of a null-terminated string.
    printf() then prints each character of the string sequentially until it encounters the null terminator (\0).
    The argument passed to printf() for %s must be of type char * (a pointer to a character array or string literal).
    */

    printf(" ptr: %s \n", name_ptr);  // name_ptr has the address of the 1st element t 
    printf(" array: %s \n", name_array); // name_array has the address of the 1st element t 

    printf(" Address stored in ptr: %p \n", name_ptr); // im just printing the address of the t with %p 
    printf(" Address stored in array: %p \n", name_array);

    printf(" Address of t in ptr: %c \n", *name_ptr); // here im pointing to the actual value of the address so it is t
    printf(" Address of t in array: %c \n", *name_array);

    printf("size of ptr: %lu \n", sizeof(name_ptr)); // usually pointer varibales of 8bytes long to store the address
    printf("size of t char: %lu \n", sizeof(*name_ptr)); // 1byte since t is char
    printf("size of array: %lu \n", sizeof(name_array)); // NOTE: it will be 9 bytes why t h a m a r a i /0 each takes 9 bytes 


    /*
    
    IMPORTANT DIFFERENCE

    size of the pointer variable is always same in a machine that is 8bytes 
    but the size of the array will increase based on the elements size

    */

    int x[] = {10, 11, 12};
    int *xptr = x;
    printf("Size of zptr: %lu \n", sizeof(xptr)); // 8bytes
    printf("Size of zptr: %lu \n", sizeof(x)); // 12 bytes

    /*
    ARRAYS cannot be reassigned but pointers can
    */

    int a[] = {110,11,11};
    // x = a; not POSSIBLE
    x[0] = a[2];
    printf("%d \n", x[0]); // this is POSSIBLE error: assignment to expression with array type
    xptr = a; // xptr is holding the address of x[0] that is 10 and im reassiging it with a which itself has the address of a[0] that is 110

    // x = xptr; error: assignment to expression with array type
    printf("%d \n", *xptr);
    
}