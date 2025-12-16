/* 

    Push: Adds a new element on the stack.
    Pop: Removes and returns the top element from the stack.
    Peek: Returns the top element on the stack.
    isEmpty: Checks if the stack is empty.
    Size: Finds the number of elements in the stack.

    NOTE: stack works on Last In First Out.
*/ 

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct  node_
{
    char name[50];
    struct node_ *next_node_p; // int *next_node is a pointer pointing to a memory location where there will be an integer in our case it is struct 
    struct node_ *prev_node_p; // this is simply a doubly linked list
    
    
} __attribute__((packed)) node;

//global vars
static node *__head_p = NULL;
static node *__tail_p = NULL;

void safe_copy_name (char *dest,char *src) {
    strncpy(dest, src, 49);
    dest[49]='\0';
}


void init(char *name){
    
    __head_p = malloc(sizeof(node));
    __head_p->next_node_p = NULL;
    __head_p->prev_node_p = NULL;
    safe_copy_name(__head_p->name, name);
    __tail_p = __head_p;

}

void push(char *name){

    node *next_p = malloc(sizeof(node));
    next_p->prev_node_p = __tail_p; // here the main code for doubly linkedlist
    __tail_p->next_node_p = next_p;
    next_p->next_node_p = NULL;
    safe_copy_name(next_p->name, name);
    __tail_p = next_p;

    
}

void pop(){
    if ( __tail_p == NULL){
        printf("TAIL itself NULL nothing to pop");
        return -1;
    }
    //tail should pop out first
    node *to_delete_p = __tail_p;
    __tail_p = __tail_p->prev_node_p;
    __tail_p->next_node_p = NULL;
    free(to_delete_p);
    to_delete_p = NULL;

}

void peek(void){
    if ( __tail_p == NULL){
        printf("TAIL itself NULL nothing to peep");
        return -1;
    }

    printf("PEEK: %s \n", __tail_p->name);
}

void isEmpty(void){

    if ( __head_p && __tail_p == NULL) printf("The stack is empty! \n");
    else printf("The stack is not empty! \n");

}

void stack_size(void){

    node *current_node_p = __head_p;
    int count = 0;

    while( current_node_p != NULL){
        count++;
        current_node_p = current_node_p->next_node_p;
    }
    printf("Number elements in the stack : %d \n", count);
}

void traverse(void){

    node *current_node_p = __head_p;
    printf("------------------- \n");

    while (current_node_p != NULL)
    {
        printf("HEAD: %s \n", current_node_p->name);
        current_node_p = current_node_p->next_node_p;

    }
}