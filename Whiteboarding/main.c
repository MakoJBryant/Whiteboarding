
// C library for performing input/output.
#include <stdio.h>


// Lab 5.4 Submission.
int find_min(int a[], int size) {

    // Set initial min to first array element.
    int min = a[0];

    // For each element in the array.
    for (int i = 0; i < size; i++)
    {
        // If the the current element is less than the current min.
        if (a[i] < min)
        {
            // Set the min to the current value.
            min = a[i];
        }
    }

    // Return the min that was found.
    return min;
}


// Main Function.
int main(void) {
    int a[8] = { 4, 5, 3, 9, 5, 2, 7, 6 };

    int min = find_min(a, 8);
    printf("Smallest value: %i\n", min);

    return 0;
}
