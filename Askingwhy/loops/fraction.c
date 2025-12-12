/**
 * 
 * Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:
Enter a fraction: 6/12
In lowest terms: 1/2
Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
 */

 #include <stdio.h>

 int main (void) {

    int num1, num2, reminder;
    printf("Enter a Fraction: ");
    scanf("%d/%d", &num1, &num2);
    int num1_cpy = num1, num2_cpy = num2;

    while (1)
    {
        if (num2 == 0) {
            printf("In lowest terms: %d/%d \n", num1_cpy/num1, num2_cpy/num1);
            break;
        } else {
            reminder = num1 % num2 ;
            num1 = num2;
            num2 = reminder;
        }   
    }
    return 0;
 }