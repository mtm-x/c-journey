// Source - https://stackoverflow.com/a/5631611
// Posted by forsvarir, modified by community. See post 'Timeline' for change history
// Retrieved 2025-12-10, License - CC BY-SA 4.0

#include <stdio.h>

int MyFunc(int counter) {
    // check this functions counter value from the stack (most recent push)

    // if counter is 0, we've reached the terminating condition, return it
    if(counter == 0) {
        return counter;
    }
    else {
        // terminating condition not reached, push (counter-1) onto stack and recurse
        int valueToPrint = MyFunc(counter - 1);

        // print out the value returned by the recursive call 
        printf("%d", valueToPrint);

        // return the value that was supplied to use 
        // (usually done via a register I think)
        return counter;
    }
}

int main() {
    // Push 9 onto the stack, we don't care about the return value...
    MyFunc(9);
}
