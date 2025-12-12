#include <stdio.h>

int main (void) {

    /**
     * GOAL:
     * Enter date (mm/dd/yy): 7/19/14
     * Dated this 19th day of July, 2014.
     */
    
    int month, date, year;
    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Dated this %d", date);
    switch (date)
    {
    case 1: case 21: case 31:
        printf("th");
        break;

    case 2: case 22: case 32:
        printf("nd");
        break;
    case 3: case 23: 
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }

    printf(" day of ");

    switch (month) {
        case 1: printf("January");
        break;
        case 2: printf("February");
        break;
        case 3: printf("March");
        break;
        case 4: printf("April");
        break;
        case 5: printf("May");
        break;
        case 6: printf("June");
        break;
        case 7: printf("July");
        break;
        case 8: printf("August");
        break;
        case 9: printf("September");
        break;
        case 10: printf("October");
        break;
        case 11: printf("November"); 
        break;
        case 12: printf("December"); 
        break;
        }
    printf(", 20%.2d.", year);

    return 0;
}