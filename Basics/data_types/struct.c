#include <stdio.h>

typedef struct __attribute__((packed)) // this tells the gcc to dont do the padding so the output will be 7 bytes now
{   
    unsigned char r; // 1 byte
    unsigned char g; // 1 byte
    unsigned char b; // 1 byte

    int a; // 4 bytes 

} pix;

void main(){

    pix p;
    p.r = 0;
    p.g = 255;
    p.b = 0;
    printf("%d \n %d \n %d \n ", p.r, p.g, p.b);
    printf("%ld \n  ", sizeof(pix)); // 

    /*totally struct pixel_t has 7 bytes but the output will be 8 bytes due to the padding bytes added by the gcc !!!
      reason for padding is memory alignment 
      Processors (CPUs) can access data from memory much more efficiently when it's located at an address that is a multiple of its size.*/
}
