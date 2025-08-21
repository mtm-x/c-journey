#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//prototypes
int init(int num);
int add(int num);
int traverse(void);
int add_back(int num);
int search(int num);
int delete(int num);
int delete_all_match(int num);
int insert(int key, int data);

//enum for return codes
enum returnType {

    RET = 0,
    DATAERR,
    ENOMEM,

} __attribute__((packed));

typedef struct node_ {

	int num;
	struct node_ *next_node;

} __attribute__((packed)) node;


//head pointer which points the start of the linked list
//specify the globle vars with __
node *__head = NULL; // initally points to null

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

    if (__head == NULL){
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
    node *previous = NULL;
    node *current = __head;

    while ( current != NULL ){

        if ( current->num == key){
            node *new_node = malloc(sizeof(node));
            node *cpy_next = current->next_node;

            current->next_node = new_node;
            new_node->next_node = cpy_next;
            new_node->num = data;
        }
        previous = current;
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

