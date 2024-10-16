
// C library for performing input/output.
#include <stdio.h>


/*
Write a function that does the following:
Name: 		find_max
Parameters: int, size: the size of the array
            int array, a: the array in which the function searches for the largest number
Return: 	int, the largest number within the array
Note:		This is a find_max function, very similar what we wrote in class
*/

int find_max(int array[], int size) {

    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if (max < array[i]) {
            max = array[i];
        }
    }

    return max;
}

int main(void) {
    int a[8] = { 4, 5, 3, 9, 5, 2, 7, 6 };

    int max = find_max(a, 8);
    printf("Largest value: %i\n", max);

    //this should now be true
    //max == 9

    return 0;
}
