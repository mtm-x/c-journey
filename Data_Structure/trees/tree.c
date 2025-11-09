#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "queue.h"

/*
 * add();
 * remove();
 * find();
 * traversal();

*/

/*
 * Enqueue: Adds a new element to the queue.
 * Dequeue: Removes and returns the first (front) element from the queue.
 * Peek: Returns the first element in the queue.
 * isEmpty: Checks if the queue is empty.
 * Size: Finds the number of elements in the queue.
 */


struct _node
{
        char data;
        struct _node *left_child;
        struct _node *right_child;
    
}__attribute__((packed));


static struct _node *__root = NULL; 


void add(char dat)
{
        struct _node *new_node = (struct _node *)malloc(sizeof(struct _node));
        new_node->data = dat;
        new_node->left_child = NULL;
        new_node->right_child = NULL;

        /*
         * If __root is NULL then add the new node as root
         */ 

        if (!__root) {
                __root = new_node;
                printf("Root is %c \n", __root->data);
                return;
        }   

        if (__root->left_child == NULL) {
                __root->left_child = new_node;
                printf("%c's left child is %c \n",__root->data, __root->left_child->data);
                destory_queue();
                return;
        } else {
                
                enqueue(__root->left_child);
                // added to future exploaration so that if right_child also not NULL we need to again come back to the childs of the left_child node
        }

        if (__root->right_child == NULL){
                __root->right_child = new_node;
                printf("%c's right child is %c \n",__root->data, __root->right_child->data);
                destory_queue();
                return;
        } else {
                enqueue((void *)__root->right_child);

        }

        /*
         * explore and find the slot 
         */
        
        while (isEmpty() == false){
            
            struct _node *tmp_node = (struct _node *)dequeue(); // will pop the first element in the queue that is left_child's addrs
         
       

            if (tmp_node->left_child == NULL){
                    tmp_node->left_child = new_node;
                    printf("%c's left_child is %c \n",tmp_node->data, tmp_node->left_child->data);
                    destory_queue();
                    return;
            } else {
                    enqueue((void *)tmp_node->left_child);
            }
            
            if (tmp_node->right_child == NULL){
                    tmp_node->right_child = new_node;
                    printf("%c's right_child is %c \n",tmp_node->data, tmp_node->right_child->data);
                    destory_queue();
                    return;
            } else {
                    enqueue((void *)tmp_node->right_child);
            }
        }
}

void preorder(struct _node *new){

        if ( new == NULL){
                return;
        }

        printf("%c ", new->data);
        preorder(new->left_child);
        preorder(new->right_child);

        return;
}

void print_preorder(void){

        printf("Preorder:");
        preorder(__root);
        printf("\n");
        return;
}

void inorder(struct _node *new){

        if ( new == NULL){
                return;
        }

        
        inorder(new->left_child);
        printf("%c ", new->data);
        inorder(new->right_child);

        return;
}

void print_inorder(void){

        printf("Inorder:");
        inorder(__root);
        printf("\n");
        return;
}


void postorder(struct _node *new){

        if ( new == NULL){
                return;
        }

        
        postorder(new->left_child);
        postorder(new->right_child);
        printf("%c ", new->data);

        return;
}

void print_postorder(void){

        printf("Preorder:");
        postorder(__root);
        printf("\n");
        return;
}

