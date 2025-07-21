#include <stdio.h>

int Arithmetic(int number1, int number2, char operation){

    int output;
    switch (operation)
    {

    case '+':
        output = number1+number2;
        printf(" %d %c %d = %d \n", number1, operation, number2, output);
        break;

    case '-':
        output = number1-number2;
        printf(" %d %c %d = %d \n", number1, operation, number2, output);
        break;

    case '/':
        if (number2 == 0){
            printf("Infinity !! \n");
            break;
        }
        float out_float = number1/number2;
        printf(" %d %c %d = %.2f \n", number1, operation, number2, out_float);
        break;

    case '*':
        output = number1*number2;
        printf(" %d %c %d = %d \n", number1, operation, number2, output);
        break;

    case '%':
        output = number1%number2;
        printf(" %d %c %d = %d \n", number1, operation, number2, output);
        break;
    
    default:
        printf("Enter a valid operator \n");
        break;
    }

    return output;
}

void main(){

    int num1, num2, ouput;
    char operation, iterate_again;

    printf("============Welcome to the simple CalC============\n ");

    while (1)
    {
        printf("    Enter the number 1: ");
        scanf(" %d", &num1);
        printf("    Enter the number 2: ");
        scanf(" %d", &num2);
        printf("    Select operation (+, -, /, x, %%): ");
        scanf(" %c", &operation);
        Arithmetic(num1, num2, operation);

        printf("Do want to calculate again (y / n): ");
        scanf(" %c", &iterate_again);

        if (iterate_again == 'y' || iterate_again == 'Y'){
            continue;
        }
        else if (iterate_again == 'n' || iterate_again == 'N')
        {
            printf("Thank you for using the CalC");
            break;
        }
    }
}