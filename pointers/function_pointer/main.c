#include <stdio.h>

// function pointers are the pointer to the code ( instructions )

// literally changing the program counter' s address with the our fucntion pointer holdings adddress

// prototypes
void function1(int n);
void function2(int);

int main(){

    int n = 10;
    void (*func_ptr)(int n); // can be declared like this void (*func_ptr)() = function1; 
    func_ptr = &function1; // can be declared as func_ptr = &function1; NOTE:: Never use fucntion1() this parenthesis translates to function call!!!!!!!!!!
    func_ptr(n); // NOTE: While calling the fucntion we didnt mention the datatype like void or the datatype of params

    func_ptr = function2;
    func_ptr(1000);

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