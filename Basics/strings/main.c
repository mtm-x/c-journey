#include <stdio.h>

int main(){

	char *var = "Hi";
	printf("%s \n", var);
	printf("%d \n", *var); //The * operator, when used before a pointer variable (like *var), means "go to the memory address that var is holding, and give me the value stored at that address."
	printf("The address stored in var: %p \n", &var); //(void *)var
	return 0;
}
	