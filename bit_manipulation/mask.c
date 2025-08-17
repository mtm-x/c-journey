#include <stdio.h>

int main(){

    volatile const int var;

    // consider we want to isolate ef and clear that

    int victim = 0xabcdef23;
    // or we mask = 0xff << 8
    int mask = 0x0000ff00; // so we set ff in the exact location of ef
    printf("%x \n", victim);
    printf("%x \n", victim | mask); // by or we see we set it to ff
    mask = ~mask;
    printf("%x \n", victim & mask); // we have cleared the ef 

}