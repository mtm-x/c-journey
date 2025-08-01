
int main(){
    // local declaration of the enum

    enum state_te {

        //define enum variables all in caps

        EXPLORE = 1, // if we didnt mention it will start from 0
        APPROACH_LENGTH, // complier will auto increment  by 1 this will be 2
        OBJECT_DETECTION = 10, // we can add another number here 
        APPROACH_BREADTH, // this will be 11
        QR_DECODE

    };

    EXPLORE = 10; // not possible because it litterally means 1 = 10 ( not possible )
    //error: lvalue required as left operand of assignment

}