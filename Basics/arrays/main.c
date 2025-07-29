#include <stdio.h>

int main(){

    int a[5] = {1,2,3,5,6};
    a[6] = 101;
    printf("%ld \n", sizeof(a));
    printf("%d \n", a[6]);
}