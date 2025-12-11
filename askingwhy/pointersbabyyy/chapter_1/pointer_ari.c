#include <stdio.h>

int main (void) {
    int vector = 28;
    int vector1 = 23;
    int vector2 = 21;
    int *p0 = &vector;
    int *p1 = &vector1;
    int *p2 = &vector2;
    printf("p1: %p \n", p1);
    printf("p2: %p \n", p2);
    printf("p0: %p \n", p0);

    printf("p2-p0:%d \n",p2-p0);
    printf("p2-p1:%d \n",p2-p1);
    printf("p0-p1:%d \n",p0-p1);
    
    return 0;
}