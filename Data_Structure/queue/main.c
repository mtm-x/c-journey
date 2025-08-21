#include "queue.h"
#include <stdio.h>

//main
int main(){

	init(101);
    for ( int i = 0; i < 10; i++) add_back(i);
    traverse();
    fetch();
    traverse();
	return RET;

}
	
