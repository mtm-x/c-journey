#include <stdio.h>
#include <stdint.h>

typedef union xyz {

    int a;
    int b;
    int c;
    uint32_t d;
    char ch;

} union_tpye;

int main (){

    union_tpye u_1;
    // u_1.d = 10;

    u_1.b = 0xFF000041; // according to little endian this 41 will be plcaed in the stack nearer to the lowest address and since ch and b all share the same memory space
    // all the variables starts at same address so the char ch has 41 because of u_1.b = 0xFF000041 0x41 = 65 in decimal in char it is A

    printf("%u \n", u_1.a);  //u - unsigned number 
    printf("%c \n", u_1.ch);
    return 0;
}