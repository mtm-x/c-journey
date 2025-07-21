#include <stdio.h>

void main() {

    {
        auto int var_ = 10; // var_ only available within this brackets only 
    }
    int ano_ = 10;

    
    printf("%d", var_); // cannot be used outside of the paranthesis
    

}

