
// C library for performing input/output.
#include <stdio.h>


// Fill in the code to copy the content of array `a` into array `b` not using a loop:
int main(void) {

    int a[5] = { 1, 2, 3, 4, 5 };
    int b[5] = { 0 };

    //your code here
    b[0] = a[0];
    printf("%d", b[0]);

    b[1] = a[1];
    printf("%d", b[1]);
    
    b[2] = a[2];
    printf("%d", b[2]);
    
    b[3] = a[3];
    printf("%d", b[3]);
    
    b[4] = a[4];
    printf("%d", b[4]);

    return 0;

}
