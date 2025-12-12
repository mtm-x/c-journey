#include <stdio.h>

int main (void) {
    int date, month, year;

    scanf("Enter a date (mm/dd/yyyy): %d/%d/%d", &month, &date, &year);
    printf("You entered the date: %d%2.2d%2.2d \n", year, month, date);
    return 0;
}

