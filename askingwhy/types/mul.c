#include <stdio.h>

int main (void) {

    int i = 2147483647;
    long truck;

    truck = (long) i  * 2;
    printf("%ld \n", truck);
    printf("%ld \n", sizeof(long));
    printf("%ld \n", sizeof(long long int));
    printf("%lu \n", sizeof(unsigned long long int));
    printf("long double size: %zu bytes\n", sizeof(long double));

    // Check for the special 128-bit integer extension
    // We use __int128 which is supported by GCC/Clang
    printf("__int128 size:  %zu bytes\n", sizeof(__int128));
    return 0;
}