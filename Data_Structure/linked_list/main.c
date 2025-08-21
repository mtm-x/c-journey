#include "sll.h"
#include <stdio.h>

//main
int main(){

	init(101);
    // add(2);
    // add_back(3);
    // traverse();

    // for ( int i = 0; i < 100000; i++) add(i); 0m0.010s ------------- O(const)
    // for ( int i = 0; i < 100000; i++) add_back(i);  //0m12.984s ----------- O(n)

    for ( int i = 0; i < 2; i++) add(i);
    for ( int i = 0; i < 2; i++) add_back(i);
    traverse();
    printf("101: %d \n", search(101));
    printf("102: %d \n", search(102));
    delete(101);
    delete_all_match(0);
    traverse();
    insert(1, 5);
    traverse();

	return RET;

}
	
