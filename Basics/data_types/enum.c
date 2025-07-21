#include <stdio.h>

enum state_te {

    EXPLORE = 1, // if we didnt mention it will start from 0
    APPROACH_LENGTH, // complier will auto increment  by 1 this will be 2
    OBJECT_DETECTION = 10, // we can add another number here 
    APPROACH_BREADTH, // this will be 11
    QR_DECODE

};


void main(){

    int current_state = 1;

    switch (current_state)
    {

    case EXPLORE:
        printf("\n %s \n", "EXPLORING");
        break;
    case APPROACH_LENGTH:
        printf("\n %s \n", "APPROACHING LENGTH");
        break;

    default:
        printf("\n %s \n", "DEFAULT");
        break;;
    }
}