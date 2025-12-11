#include <stdio.h>

int main (void) {


    const int num = 10;
    const int pcc =1;
    const int  *ptr = &num;

    ptr = &pcc;
    // *ptr = 111; ERROR

    printf("%d \n", *ptr);


    int *const constptr = &num;
    *constptr = pcc; //POSSIBLE but not constptr = &pcc;

    /* This is also possible Pointer to (constant pointer to constant) :)))))*/
    
    const int *const *pcpci = &ptr;
     printf("%d \n", **pcpci);
    return 0;
}