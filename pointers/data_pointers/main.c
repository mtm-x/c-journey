#include <stdio.h>

void main(){

    //varibles with data types
    char            a = 'A';
    int             b = 10;
    float           c = 5.5;
    long long int   d = 123456;

    //pointers with data types
    
    char            *pa = &a;
    int             *pb = &b;
    float           *pc = &c;
    long long int   *pd = &d;

    printf(" sizeof(*pa): %lu \n sizeof(*pb): %lu \n sizeof(*pc): %lu \n sizeof(*pd): %lu \n",
            sizeof(*pa),        sizeof(*pb),         sizeof(*pc),         sizeof(*pd));

    *pa = 'B';
    *pb = *pb + 1; // 10+1
    *pc = *pc + 1.2;
    *pd = *pd - 1000;

    printf(" *pa: %c \n *pb: %d \n *pc: %f \n *pd: %lli \n", *pa, *pb, *pc, *pd);

}