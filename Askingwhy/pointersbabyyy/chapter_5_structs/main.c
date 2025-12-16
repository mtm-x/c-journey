#include <stdio.h>
#define TITLE_LEN 20
#define AUTHOR_LEN 20
#define DESIGN_LEN 10

int main (void) {

    /*88 Bytes*/

    // struct catalog_item {
    //     int stock_number;
    //     double price;
    //     int item_type;
    //     char title[TITLE_LEN+1];
    //     char author[AUTHOR_LEN+1];
    //     int num_pages;
    //     char design[DESIGN_LEN+1];
    //     int colors;
    //     int sizes;

    // };

    /*72 Bytes*/
    struct catalog_item {
        int stock_number;
        double price;
        int item_type;

        union {
            struct {
            char title[TITLE_LEN+1];
            char author[AUTHOR_LEN+1];
            int num_pages;
            } book;

            struct {
            char design[DESIGN_LEN+1];
            } mug;

            struct {
                char design[DESIGN_LEN+1];
                int colors;
                int sizes;
            } shirt;

        } item;
    };

    struct catalog_item size;
    printf("%ld \n", sizeof(size));


    return 0;
}