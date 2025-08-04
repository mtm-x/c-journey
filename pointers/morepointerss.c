int main(){
    // check `pointersss.png`
    
    int x = 10;
    int *px = &x; // px holds the address of the x
    int **ppx = &px; // ppx holds the address of the px which itself holding the address of the x

    // single and double pointers are mostly used
    int ***pppx = &ppx;
}