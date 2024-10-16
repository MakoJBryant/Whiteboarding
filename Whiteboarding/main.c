
// C library for performing input/output.
#include <stdio.h>


/*
Write a function that does the following:
Name: 		copy
Parameters: int, size: the size of the arrays to be copied
            int array, input: the array continaing the data to be copied
            int array, output: the array to recieve the data
Return: 	none
Note:		This is a copy function t, exactly what we wrote in class
*/

void copy(int size, int arrayInput[], int arrayOutput[]) {

    for (int i = 0; i < size; i++)
    {
        arrayOutput[i] = arrayInput[i];
    }

    return;
}

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
    int b[5] = { 0 };

    copy(5, a, b);
    print_array(5, b);

    //this should now be true
    //b[0] == 1
    //b[1] == 2
    //b[2] == 3
    //b[3] == 4
    //b[4] == 5

    return 0;
}
