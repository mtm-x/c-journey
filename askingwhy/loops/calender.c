/**
 * Write a program that prints a one-month calendar. The user specifies the number of days in
the month and the day of the week on which the month begins:
Enter number of days in month: 31
Enter starting day of the week (1=Sun, 7=Sat): 3
 */

 #include <stdio.h>

 int main (void) {
    int number_days, day, i;

    printf("Enter number of days in month: ");
    scanf("%d", &number_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);
   

    for ( i = 1; i < day; i++){
        printf("\t");
    }

    for (i = 1; i <= number_days; i++, day++) {

        if ( day > 7){
            printf("\n");
            day = 1;
        }
        printf("%d \t", i);
    }
    printf("\n");
    return 0;
 }