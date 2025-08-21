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
int traverse(void);
int add_back(int num);
int fetch(void);
int search(int num);

#endif