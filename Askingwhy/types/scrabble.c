/** 
 *  In the SCRABBLE Crossword Game, players form words using small tiles, each containing
    a letter and a face value. The face value varies from one letter to another, based on the let-
    ter’s rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K,
    8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values
    of its letters:
    Enter a word: pitfall
    Scrabble value: 12
*/


#include <stdio.h>
#include <ctype.h>

int main (void) {

    printf("Enter a Word: ");
    char ch = getchar();
    int value = 0;

    while (ch != '\n')
    {
        ch = toupper(ch);

        if ( isdigit(ch) || ispunct(ch)){
            printf("ONLY WORDS");
            //continue; can't use it here because it transfers the control to the bottom of the loop which is after ch = getchar() and ch will never get updated.
        }
        /* 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ*/
        else if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U') { 
            value+=1;
        }

        else if (ch == 'D' || ch == 'G')
        {
            value+=2;
        }

        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
        {
            value+=3;
        }

        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y' )
        {
            value+=4;
        }

        else if (ch == 'K'  )
        {
            value+=5;
        }

        else if (ch == 'J' || ch == 'X' )
        {
            value+=8;
        }

        else if (ch == 'Q' || ch == 'Z')
        {
            value+=10;
        }

        ch = getchar();
    }
    printf("Scrabble value: %d \n", value);

    return 0;
}