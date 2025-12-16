#include <stdio.h>


int add(int num1, int num2) {
    return num1 + num2;
}
int sub(int num1, int num2) {
    return num1 - num2;
}

/* 
    The add and sub function’s addresses were passed to
    the compute function. These addresses were then used to invoke the corresponding
    operation.
*/

typedef int (*fptrOperation)(int,int);

fptrOperation select(char opcode);


int compute(char opcode, int num1, int num2) {
    fptrOperation operation = select(opcode);

    return operation(num1, num2);
}

/*Returing function pointer*/

fptrOperation select(char opcode){

    switch (opcode)
    {
    case '+':
        return add;
    
    case '-':
        return sub;

    default:
        break;
    }
}


int main (void) {

    printf("%d\n",compute('+',5,6));
    printf("%d\n",compute('-',5,6));
    return 0;
}