enum state_te {

    //define enum variables all in caps

    EXPLORE = 1, // if we didnt mention it will start from 0
    APPROACH_LENGTH, // complier will auto increment  by 1 this will be 2
    OBJECT_DETECTION = 10, // we can add another number here 
    APPROACH_BREADTH, // this will be 11
    QR_DECODE

};

int main(){

    int EXPLORE ; // due to local varible it will work
}

/*p &a
$3 = (int *) 0x7fffffffcbf8
>>> p &EXPLORE
$4 = (int *) 0x7fffffffcbfc
 */