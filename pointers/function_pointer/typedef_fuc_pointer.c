#include <stdio.h>


// prototypes
void function1(int n);
void function2(int);

//typedef to function is usually used all over the source code
typedef void (*func_ptr)(int);

int main(){

    func_ptr pf; // after typedef we can use it like this 
    pf = function1;
    pf(10);
    return 0;
}

void function1(int n){
    printf("Function 1 \n");
    printf("%d \n", n);

}

void function2(int m){
    printf("Function 2 \n");
    printf("%d \n", m);
    
}