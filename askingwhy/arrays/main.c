#include <stdio.h>

void store_zeros(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        a[i] = 0;
    }
}

int main (void) {
    int b[5] = {1,2,3,4,5};
    store_zeros(b,5);

    for (int i = 0; i < 5; i++){
        printf("%d \n", b[i]);
    }

    return 0;
}