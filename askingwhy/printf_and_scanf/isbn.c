#include <stdio.h>

int main (void) {

    int GS1_Prefix, group_identifier, pub_code, item_num, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1_Prefix, &group_identifier, &pub_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\n", GS1_Prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);

    return 0;
}