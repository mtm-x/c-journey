#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "sll.h"

typedef struct node_ {

	int num;
	struct node_ *next_node;

} __attribute__((packed)) node;

//head pointer which points the start of the linked list
//specify the globle vars with __
static node *__head = NULL; // initally points to null

int init(int num){
	
    __head = malloc(sizeof(node)); // creating our first node and making the __head to point it

    if (__head == NULL){
        printf("Cannot allocate memory");
        return -ENOMEM;
    }

    __head->next_node = NULL; // since we only have one node we are making the next_node to be NULL
    __head->num = num;

    /*
    NOTE:
    The memcpy() function in C is used to copy a specified number of bytes from one memory location to another.
    It is a highly efficient, low-level function that operates directly on memory addresses
    */

	// printf("%d \n", __head->name); // should print what is in the name 
    // printf("%p \n", &__head->name); // it will print some address let say x
	// printf("%p \n", &__head->next_node); // this would be exactly x+40 since the name is 40 bytes

	return RET;
}

int add(int num){

    node *next_ = malloc(sizeof(node)); // creates a struct node somewhere and returns the addr 

    if (next_ == NULL){
        printf("Cannot allocate memory");
        return -ENOMEM;
    }

    next_->next_node = NULL;
    next_->num = num;

    // simple approach to add a new node or element is simply putting that infront of the current one so it has the worst case of O(1)

    next_->next_node = __head; // now the new node we created is pointing to the first element 
    __head = next_;

    //need to free up the malloc
    return RET;
}

int add_back(int num){

    node *next_ = malloc(sizeof(node));

    for ( node *current = __head; 
          current != NULL; 
          current = current->next_node)
    {

        if ( current->next_node == NULL)
        {
            current->next_node = next_;
            next_->next_node = NULL;
            next_->num = num;
            return RET;
        }
    }

    // at this line the current is at the last node so we can have the whole if statement outside
    
    return RET;
}

int search(int num){

    for ( node *current = __head; 
          current != NULL; 
          current = current->next_node)
    {

        if ( current->num == num) return true;
        
    }

    return RET;
}

int delete(int num){

    node *previous = NULL;
    node *current = __head;

    while ( current != NULL){

        if ( current->num == num){

            if ( __head->num == num && previous == NULL)
            {
                __head = current->next_node;
                free(current);
                return RET;
            }

            else{
                previous->next_node = current->next_node;
                free(current);
                current = previous->next_node;
                return RET;
            }

            
        }
        previous = current;
        current = current->next_node;
        
    }
}

int delete_all_match(int num){
    node *previous = NULL;
    node *current = __head;

    for ( node *current = __head; 
          current != NULL;)

    {
        if ( current->num == num){

            if ( previous == NULL && __head->num == num){
                __head = current->next_node;
                free(current);
            }

            else{
                previous->next_node = current->next_node;
                printf("Number %d is deleted! \n", num);
                free(current);
                current = previous->next_node;
            }
        } 

        else{
            previous = current;
            current = previous->next_node;
        }    
    }
    return RET;
}

int insert(int key, int data){
    node *current = __head;

    while ( current != NULL ){

        if ( current->num == key){
            node *new_node = malloc(sizeof(node));
            node *cpy_next = current->next_node;

            current->next_node = new_node;
            new_node->next_node = cpy_next;
            new_node->num = data;
        }
        current = current->next_node;
    }
}

int traverse(void) {
    printf("Traversing...\n");
    for ( node *current = __head;
         current != NULL; 
         current = current->next_node) 
    {

        printf("%d \n", current->num);    
    }
    return RET;
}

