#ifndef __HEAD__
#define __HEAD__

//enum for return codes
enum returnType {

    RET = 0,
    DATAERR,
    ENOMEM,

} __attribute__((packed));


//prototypes
int init(int num);
int add(int num);
int traverse(void);
int add_back(int num);
int search(int num);
int delete(int num);
int delete_all_match(int num);
int insert(int key, int data);

#endif