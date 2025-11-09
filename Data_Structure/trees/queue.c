#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
 * Based on doubly linked list.
 * Enqueue: Adds a new element to the queue.
 * Dequeue: Removes and returns the first (front) element from the queue.
 * Peek: Returns the first element in the queue.
 * isEmpty: Checks if the queue is empty.
 * Size: Finds the number of elements in the queue.
 */


struct _node {

    int *node_ptr;
    struct _node *next_node;

} __attribute__((packed));

static struct _node *__head = NULL;
static struct _node *__tail = NULL;

void enqueue(void *ptr){

        if ((__head && __tail) == NULL){

            __head = (struct _node *)malloc(sizeof(struct _node));

            if (__head == NULL){
                    printf("Cannot allocate memory");
                    return;
            }

            __head->node_ptr = ptr;
            __head->next_node;
            __tail = __head;

            return;

        } else {

            
            struct _node *tmp_node = (struct _node *)malloc(sizeof(struct _node));
            
            struct _node *current;

            if ( __tail == NULL) {
                current = __head;
            } else {
                current = __tail;
            }
            
            if (tmp_node == NULL){
                    printf("Cannot allocate memory");
                    return;
            }

            current->next_node = tmp_node;
            tmp_node->next_node = NULL;
            tmp_node->node_ptr = ptr;
            __tail = tmp_node;
            return;
        }
}

void* dequeue(void){
    // pop first element that is __head

    if (__head == NULL) {
            return NULL; // Return NULL or signal an error if the queue is empty
    }
    struct _node *current = __head; 
    void *tmp;
    __head = current->next_node;
    tmp = current->node_ptr;
    // printf("%p \n", tmp);
    free(current);
    current = NULL;

    return tmp;

}

bool isEmpty(void){

    if ( __tail && __head == NULL){
        return true;
    } else {
        return false;
    }
}

void destory_queue(void){
    struct _node *current = __head;
    struct _node *tmp;

    while (current){
        tmp = current->next_node;
        free(current);
        current = tmp;
        
    }
    /* IMPORTANT */
    __head = NULL;
    __tail = NULL;
    return;
}