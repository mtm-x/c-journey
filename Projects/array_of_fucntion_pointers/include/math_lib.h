#ifndef MATH_H
#define MATH_H

typedef enum {

    ADD,
    SUB,
    MUL,
    DIV

} operations;

//function prototype
void execute_operation(operations op, int a, int b);

#endif