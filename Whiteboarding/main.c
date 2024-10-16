
// C library for performing input/output.
#include <stdio.h>


/*
Write a function that does the following:
Name: 		print_array
Parameters: int, size: the size of the arrays to be printed
            int array, input: the array continaing the data to be printed
Return: 	none
Note:		This function should print the content of the array to the console
*/

void print_array(int size, int array[]) {

    for (int i = 0; i < size; i++)
    {
        int temp = array[i];
        printf("%d", temp);
    }

    return;
}

int main(void) {

    int a[5] = { 1, 2, 3, 4, 5 };

    print_array(5, a);

    //printed to console:
    //1 2 3 4 5 

    return 0;

}
