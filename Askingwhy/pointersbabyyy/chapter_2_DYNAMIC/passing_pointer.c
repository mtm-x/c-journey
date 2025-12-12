#include <stdio.h>
#include <stdlib.h>

int allocateMemory(int **arr, int size, size_t bytes);

int main (void) {

    int *vec = NULL;


    printf("VEC: %p \n", &vec);     /*VEC: 0x7ffffccc4e80*/
    printf("BEFORE - VEC: %p \n", vec);     /*BEFORE - VEC: (nil) */

    allocateMemory(&vec, 5, 16);    

    /*
        AFTER - VEC: 0x5bc0d87c06b0 
        AFTER - *(vec): 5 
        AFTER - *(vec+1): 5 
        AFTER - *(vec+2): 5 
        AFTER - *(vec+3): 5 
        AFTER - *(vec+4): 0  since out of range 
    
    */
    printf("AFTER - VEC: %p \n", vec);
    printf("AFTER - *(vec): %d \n", *(vec));
    printf("AFTER - *(vec+1): %d \n", *(vec+1));
    printf("AFTER - *(vec+2): %d \n", *(vec+2));
    printf("AFTER - *(vec+3): %d \n", *(vec+3));
    printf("AFTER - *(vec+10): %d \n", *(vec+10));

    return 0;
}

int allocateMemory(int **arr, int value, size_t bytes){

    printf("ARR: %p \n", arr); /*ARR: 0x7ffffccc4e80 -- same as vec*/

    *arr = (int *)malloc(bytes); /*now VEC pointing address is changed to new instead of NIL*/

    if(*arr != NULL){
        for (size_t i = 0; i < value; i++)
        {
            *(*arr+i) = value; /*    *(0x5bc0d87c06b0 + 1*(sizeof(int))) = 5      */
        }
        
    }

    return 0;
}

 
void safeFree (void **ptr) {

    if (ptr != NULL && *ptr != NULL)
    {
        free(ptr);
    }
    
}