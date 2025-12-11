#include <stdio.h>

int main(void) {

    // int a[10] = {0};
    int a[] = {4, 9, 1, 8, [0] = 5, 7};
    printf("%p \n", a);
    printf("%p \n", &a[0]);
    printf("%ld \n", sizeof(a));

    for ( int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d \n", a[i]);
    }

    return 0;
}