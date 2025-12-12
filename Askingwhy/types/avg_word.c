/**
 * Write a program that calculates the average word length for a sentence:
 * Enter a sentence: It was deja vu all over again. 
 * Average word length: 3.4
 */

#include <stdio.h>
#include <ctype.h>

int main (void) {

    printf("Enter a sentence: ");
    char ch = getchar();

    int word_len = 0, spaces = 0;

    while (ch != '\n')
    {
        if (isspace(ch))
        {
            spaces++;
            ch = getchar();
            continue;
        }
        word_len++;
        ch = getchar();

    }
    
    printf("Word length : %d \n", word_len);
    printf("spaces: %d \n", spaces);
    printf("Average Word length: %.1f \n", (float) word_len/(spaces+1));
    return 0;
}