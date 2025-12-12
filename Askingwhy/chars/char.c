#include <stdio.h>

int main (void) {

    int counter = 0;
    while (getchar() != '\n')
    {
        counter++;
    }
    printf("%d \n", counter);
    

    return 0;
}   