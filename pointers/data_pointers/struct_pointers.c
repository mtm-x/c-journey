#include <stdio.h>

/*
The ability to pass a pointer to a function is one of the most common and powerful uses of pointers.
 It's how we give a function the ability to change the original data, not just a copy.
*/

struct example_struct {

    long long int   a;
    char            b;
    float           c;    
} __attribute__((packed));

void change_struct (struct example_struct my_struct);
void change_struct_pointer(struct example_struct *ptr);

int main(){

    struct example_struct var = {

        .a = 1000201, // alternate method to assign the values to struct instantiation struct example_struct var; then var.a = 1000201
        .b = 'S',
        .c = 100.0
    };

    printf(" address(a): %p \n address(b): %p \n address(c): %p \n", &var.a, &var.b, &var.c); // address(a): 0x7ffe938c0e6b 


    var.a = 1222222; 
    change_struct(var);

    struct example_struct *s_ptr =  &var;
    printf("%ld \n", sizeof(*s_ptr)); // will be 16 bytes coz example_struct = 8 + 1 + 4  = 13

    (*s_ptr).b = 'A';
    (*s_ptr).c = 10.5;
    // instead of (*s_ptr).b this we can use 
    s_ptr -> a = 555555555;

    change_struct_pointer(s_ptr);

    // different ways to access the struct 
    printf("var.a: %lli \n", var.a);
    printf("(*s_ptr).a: %lli \n", (*s_ptr).a);
    printf("s_ptr -> a: %lli \n", s_ptr -> a); // used widely in linux kernel and FREERtos
    
    return 0;
}

void change_struct (struct example_struct my_struct){

    my_struct.a =4444422;
    printf(" my_struct.a: %p", &my_struct.a); // here this function creates the copy of the struct that is my_struct is != var 
    //  my_struct.a: 0x7ffe938c0e5013 
}

void change_struct_pointer(struct example_struct *ptr){

    (*ptr).a = 5555555;
    printf(" (*ptr).a: %p \n", &((*ptr).a)); // this will change the original var struct without creating a new copy of it 
    //  (*ptr).a: 0x7ffe938c0e6b 
}


/*

TAKEAWAYS:

Modifying the Original Data: Pointers allow a function to directly change the contents of a struct that was created somewhere else in the program.
This is crucial for functions that are designed to "update" or "modify" data.

Efficiency: Passing a tiny memory address is much more efficient than copying an entire, potentially very large, struct every time you call a function.

*/