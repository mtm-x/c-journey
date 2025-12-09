/**
 *  Write a program that evaluates an expression:
    Enter an expression: 1+2.5*3
    Value of expression: 10.5
*/

#include <stdio.h>
#include <ctype.h>

int main (void) {

    printf("Enter an expression: ");
    float result = 0.0;
    scanf("%f", &result);
    float operand1 = 0.0, operand2 = 0.0;

    char ch;
    ch = getchar();

    while (ch != '\n')
    {
        
        if (ch == '+')
        {
            scanf("%f", &operand1);
            result += operand1;
        }

        else if (ch == '-')
        {
            scanf("%f", &operand1);
            result -= operand1;
        }

        else if (ch == '*')
        {
            scanf("%f", &operand1);
            result *=  operand1;
        }
        
        ch = getchar();
        
    }

    printf("Value of expression: %.1f \n", result);

    return 0;
}