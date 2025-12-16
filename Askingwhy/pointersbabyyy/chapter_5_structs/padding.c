#include <stdio.h>

int main (void) {

    typedef struct _alternatePerson {
        char* firstName;
        char* lastName;
        char* title;
        // short age
        char a;
    } AlternatePerson;

    printf("%ld\n",sizeof(AlternatePerson));
    return 0;
}