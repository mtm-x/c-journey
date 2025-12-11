#include <stdio.h>

int main (void) {

    char *titles[] = {"A Tale of Two Cities",
                    "Wuthering Heights","Don Quixote",
                    "Odyssey","Moby-Dick","Hamlet",
                    "Gulliver's Travels"};

    /**
     * titles[0], titles[1]... are stored in some part of memory in continious manner
     * lets say 900,904,908...
     * title[0] - has the address of the A lets say 100
     */

    /** The double pointer translates to read from the backwards 
     * 1. bestBooks[] is an array
     * 2. it is a pointer array - goings to have a pointers in a sequential manner
     * 3. these pointers are type char* this implies char* *bestBooks[]
     * */

     /* NO USE FOR DOUBLE POINTER HERE BUT YES WE CAN USE IT C PEW PEW*/

    char *bestBooks[3];
    char **englishBooks[4];
    
    printf("%c\n", *titles[0]);

    bestBooks[0] = titles[0];
    bestBooks[1] = titles[3];
    bestBooks[2] = &*titles[5];

    englishBooks[0] = &titles[0]; // we are storing the address of title[0] -- 900 so now englishbook[0] has 900 in that address we have the address of A which is passed to %s it gets printed DAMMN
    englishBooks[1] = &titles[1];
    englishBooks[2] = &titles[5];
    englishBooks[3] = &titles[6];

    /** NOTE: String format specifier expects address rather than the value itself so we are passing the address by 
     *  --> titles[3] and *englishBooks[3] thses contains the address of the first letters of the Odyssey and Gulliver's Travels respectively
     *  --> **englishbook[3] gives the G 
     */

    printf("%s\n", *englishBooks[0]);
    printf("%s\n", bestBooks[1]);
    return 0;
}