#include <stdio.h>

int main(){

    char *str = "HIIII";
    char x[] = {'H','I','$','\0'};
    int y[] = {1,24,5};
    printf("%s \n", &x[0]); //x = &x[0]
    printf("%d \n", y); // now y literally = &y[0] that is address of the first element but the %d expects an integer


}