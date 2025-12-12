#include<stdio.h>

int main (void) {
    int item;
    float money;
    int date, month, year;

    printf("Enter item number: ");
    scanf(" %d", &item);
    printf("Enter unit price: ");
    scanf(" %f", &money);
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);
    

    printf("Item\t\tUnit\t\tPruchase\n");
    printf("\t\tprice\t\tDate\n");

    printf("%d\t\t$%6.2f\t\t%d%2.2d%2.2d \n", item,money, year, month, date);

    return 0;
}