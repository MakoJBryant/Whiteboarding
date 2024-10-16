
// C library for performing input/output.
#include <stdio.h>


// Fill in the code to copy the content of array `a` into array `b` using a loop:
int main(void) {

    int a[5] = { 1, 2, 3, 4, 5 };
    int b[5] = { 0 };

    //your code here
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
        printf("%d", b[i]);
    }

    return 0;

}
