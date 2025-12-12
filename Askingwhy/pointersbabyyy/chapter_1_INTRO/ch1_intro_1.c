#include <stdio.h>
#include <stdlib.h>

int dummy(){
    return 1;
}

int main (void) {
    char *names[] = {"Miller","Jones","Anderson"};
    printf("%c\n",*(*(names+1)+2));
    printf("%c\n",names[1][2]);

    static int a;
    int *globalea = & a;


    const int var = 10;
    const int *pci = &var;

    // *pci = 11; will throw an error

    printf("%d \n", *pci);
    printf("%d \n", var);

    pci = 0;
    pci = NULL;
    pci = (void *)0;

    printf("GLobal: %d \n", a);

    printf("Size of *char: %ld\n",sizeof(char*));
    int *pi = (int *) malloc(sizeof(int));
    *pi = 5;
    free(pi);
    
    int num = 5;
    void *pv = &num;
    printf("%p\n",pv);
    pv = pv+1;
    printf("%p\n",pv);

    return 0;
}