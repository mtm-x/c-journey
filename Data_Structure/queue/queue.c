#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "queue.h"


/*
 *Enqueue: Adds a new element to the queue.
 *Dequeue: Removes and returns the first (front) element from the queue.
 *Peek: Returns the first element in the queue.
 *isEmpty: Checks if the queue is empty.
 *Size: Finds the number of elements in the queue.
 */

typedef struct node_ {

	int num;
	struct node_ *next_node;

} __attribute__((packed)) node;

//head pointer which points the start of the linked list
//specify the globle vars with __
static node *__head = NULL; // initally points to null
static node *__tail = NULL;


int init(int num){
	
    __head = malloc(sizeof(node)); // creating our first node and making the __head to point it

    if (__head == NULL){
        printf("Cannot allocate memory");
        return -ENOMEM;
    }

    //head
    __head->next_node = NULL; // since we only have one node we are making the next_node to be NULL
    __head->num = num;

    //tail
    __tail = __head;

	return RET;
}


int add_back(int num){

    node *next_ = malloc(sizeof(node));
    node *current;

    if ( __tail == NULL) current = __head;
    else current = __tail;
        
    current->next_node = next_;
    next_->next_node = NULL;
    next_->num = num;
    __tail = next_;
    
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

int fetch(void){

    if (!__head) {
        printf("Empty Queue!");
        return -DATAERR;
    } 
    

    node *current = __head;
    __head = current->next_node;
    printf("Top of the queue: %d \n", current->num);
    free(current);
    current = NULL;

    return RET;
}

int traverse(void) {

    printf("Traversing...\n");
    for ( node *current = __head;
         current != NULL; 
         current = current->next_node) 
    {
        printf("%d -->", current->num);    
    }
    printf(" \n TAIL: %d", __tail->num);
    printf("{} \n");
    return RET;

}

