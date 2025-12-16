#include <stdio.h>
#include <stdlib.h>

int main(void) {

    typedef struct dynamic_struct
    {
        char *first_name;
        char *last_name;

    } Person;

    Person *ptrPerson;
    ptrPerson = (Person *)malloc(sizeof(Person));
    
    /*With stack*/
    Person per;
    per.first_name = "Thamarai";

    /*Dynamic*/

    ptrPerson->first_name = "Thamarai";

    (*ptrPerson).last_name = "M";

    printf("%p \n", ptrPerson);
    printf("%s", (*ptrPerson).first_name);

    printf("%s", ptrPerson->first_name);

    free(ptrPerson);
    ptrPerson = NULL;

    
    return 0;
}