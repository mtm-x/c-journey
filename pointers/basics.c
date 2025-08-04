#include <stdio.h>

int main(){

    char character = 'A';
    char *c_ptr = &character; // so usually the size of the pointer varible is 8bytes to store the address

    /*
    char *c_ptr;
    c_ptr = &character;
    */

    printf("character: %c and its address: %p \n", character, &character);
    printf("value of c_ptr holding: %p and value of c_ptr pointing to: %c \n", c_ptr, *c_ptr);
    printf("Size of c_ptr: %zu \n", sizeof(c_ptr)); // 8 Bytes
    printf("Size of *c_ptr(value being pointed): %zu \n", sizeof(*c_ptr)); // 1 bytes since the character is of char which is 1 Byte

    /*output:
    character: A and its address: 0x7ffe0fe4df5f 
    value of c_ptr holding: 0x7ffe0fe4df5f and value of c_ptr pointing to: A 
    Size of c_ptr: 8 
    Size of *c_ptr(value being pointed): 1 
    */
}