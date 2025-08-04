#include <stdio.h>

int main(){

    char abc = 'A';
    char *ptr = &abc;
    //ptr = &abc;

    
    char number[4];

    int *int_ptr;
    int_ptr = &number[3]; //*** stack smashing detected ***: terminated

    // number[3] can only holds 1 byte and *int_ptr is int ( 4 bytes ) if i try to write 4 bytes of data in  1 byte of address it tries to occupy next memory byte

    *int_ptr = 66; // this 66 will be written into the number[3] but number[3] is 1 byte our 66 is 4 bytes so stack smashing 

    int i = 0;
    while (i < 4){
        printf("%c \n", number[i]);
        i++;
    }
    

    printf("&abc: %p, ptr: %p, *ptr: %c \n", &abc, ptr, *ptr);
    return 0;

}
