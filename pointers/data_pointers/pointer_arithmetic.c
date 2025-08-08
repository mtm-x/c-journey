#include <stdio.h>
#include <stdint.h>

// in pointer arithmetic there is no multiplication and division 
// only addition and subtration are allowed 

void main(){
	
	int a[3] = {1, 2, 3};
	int *ptr;
	ptr = a;
	
	printf("*(ptr): %u \n", *(ptr));  // output will be one since ptr will have the address of `1` and pointer to it will return 1
    printf("*(ptr+1)%u \n", *(ptr+1)); // here the +1 is ---> 1*sizeof(datatype) that is ptr is type of int so 1*sizeof(int) = 4 bytes so *(ptr+1) == *(ptr+4) so the output will be 2

    int b[3] = {20,21,22};
    int *b_ptr = &b[1]; // b_ptr has the address of 21 and *b_ptr points to that

    printf("*(b_ptr): %u \n", *(b_ptr));  // output will be 21 since int *b_ptr = &b[1];
    printf("*(b_ptr+1: %u \n", *(b_ptr+1)); // output will be 22
    printf("*(b_ptr-1: %u \n", *(b_ptr-1)); // 20

    printf("%p \n", a + ((sizeof(a) / sizeof(int)) - 1)); // one of the pointer arithmetic with array since the `a` itself a pointer that has the address of the 1st element of the array
    // adding ((sizeof(a) / sizeof(int)) - 1) = 12/4 = 3 -1 = 2 --- a + 2 == address of a [2]
    printf("%p \n", &a[2]);

    for (ptr; ptr < a + ((sizeof(a) / sizeof(int))); ptr++){
        printf("ptr: %p and its value *ptr is %d \n",ptr, *ptr);
    }

    /*
    
    a[i], the compiler does a calculation for you. It takes the starting address of the array (a) and then adds i * sizeof(int) to it.
    ptr++ adds 1 * sizeof(*ptr) to the address. But here's the key difference: that 1 * sizeof(*ptr) is a simple, constant calculation. It's the same in every single iteration of the loop.

    On the other hand, the a[i] loop has a variable that changes in every iteration—the i index. So the compiler has to do a new multiplication (i * sizeof(int)) every time.
    A multiplication with a variable is a bit more work for the computer than a simple addition.

    */

}
