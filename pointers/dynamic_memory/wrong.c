#include <stdio.h>
#include <stdlib.h>

int main(){

    char *pInteger = (char *)malloc(sizeof(int));
    printf("%p \n", pInteger);
    *pInteger = 928457922;
    printf("%d \n", *pInteger);
    free(pInteger);
    pInteger = NULL;
    return 0;
}