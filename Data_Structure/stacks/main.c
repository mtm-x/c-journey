#include "stack.h"

int main(){

    init("HI");
    push("hekko");
    push("heck");
    push("fug");
    traverse();
    pop();
    traverse();
    peek();
    isEmpty();
    stack_size();
    
    return 0;
}