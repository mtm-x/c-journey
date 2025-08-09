#include <stdio.h>
#include "include/math_lib.h"

static void add (int x, int y){
    printf("ADD: %d \n", x+y);
}

static void sub (int x, int y){
    printf("SUB: %d \n", x-y);
}

static void mul (int x, int y){
    printf("MUL: %d \n", x*y);
}

static void div (int x, int y){
    printf("DIV: %d \n", x/y);
}

typedef void (*func_t)(int a, int b);

func_t func_lib[4] = {add, sub, mul, div};

void execute_operation(operations op, int a, int b){
    func_lib[op](a, b);
}