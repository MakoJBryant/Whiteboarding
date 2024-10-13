
// C library for performing input/output.
#include <stdio.h>

// Reverses the order of all values of any array.
void reverse(int size, int a[]) {

    // Loop through half of the array.
    for (int i = 0; i < (size / 2); i++)
    {
        // Store current element value temporarily.
        int temp = a[i];

        // Set current element as (i) away from last element
        a[i] = a[size - 1 - i];

        // Set (i) away from first element as stored value.
        a[size - 1 - i] = temp;

    }
}

// Main function.
int main(void) {
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int b[5] = { 1, 11, 22, 33, 44 };

    reverse(10, a);
    reverse(5, b);

    for (int i = 0; i < 10; i++)
        printf("%d\t", a[i]);

    printf("\n\n");

    for (int i = 0; i < 5; i++)
        printf("%d\t", b[i]);
}
