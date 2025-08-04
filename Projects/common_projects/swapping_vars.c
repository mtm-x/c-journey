#include <stdio.h>
#include <stdint.h>
#include "include/log.h"

int main(){
    int32_t a = 10, b = 5;

    a = a + b; //  a = 15
    b = a - b; // b = 10
    a = a - b; // a = 5

}