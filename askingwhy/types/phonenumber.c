/**
 * Write a program that translates an alphabetic phone number into numeric form:
    Enter phone number: CALLATT
    2255288

    (In case you don’t have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF,
    4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains
    nonalphabetic characters (digits or punctuation, for example), leave them unchanged:

    Enter phone number: 1-800-COL-LECT
    1-800-265-5328
 */

#include <stdio.h>
#include <ctype.h>

int main (void) {

    printf("Enter Phone number: ");
    char ch = getchar();

    while (ch != '\n')
    {
        ch = toupper(ch);

        if ( isdigit(ch) || ispunct(ch)){
            printf("%c", ch);
            //continue; can't use it here because it transfers the control to the bottom of the loop which is after ch = getchar() and ch will never get updated.
        }

        else if ( ch == 'A' || ch == 'B' || ch == 'C') {
            printf("2");
        }

        else if (ch == 'D' || ch == 'E' || ch == 'F')
        {
            printf("3");
        }

        else if ( ch == 'G' || ch == 'H' || ch == 'I') {
            printf("4");
        }

        else if (ch == 'J' || ch == 'K' || ch == 'L')
        {
            printf("5");
        }

        else if ( ch == 'M' || ch == 'N' || ch == 'O') {
            printf("6");
        }

        else if (ch == 'P' || ch == 'R' || ch == 'S')
        {
            printf("7");
        }

        else if (ch == 'T' || ch == 'U' || ch == 'V')
        {
            printf("8");
        }

        else if (ch == 'W' || ch == 'X' || ch == 'Y')
        {
            printf("9");
        }

        ch = getchar();
    }

    return 0;
}