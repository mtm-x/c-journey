//one dim array - same data type of element stored in continous manner

#include <stdio.h>

int main(){
    
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    int i = 0;

    for ( i; i< sizeof(arr); i++){
        printf("arr[%i] : %p \n",i, &arr[i]);
    }

    /*
    arr[0] : 0x7ffc79888223 
    arr[1] : 0x7ffc79888224 
    arr[2] : 0x7ffc79888225 
    arr[3] : 0x7ffc79888226 
    arr[4] : 0x7ffc79888227 
    */

    return 0;
}