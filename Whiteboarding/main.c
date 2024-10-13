
// C library for performing input/output.
#include <stdio.h>

// Lab 5.5 Submission.
void rotate_right(int size, int a[]) {

	// Save last position of given array.
	int temp = a[size - 1];

	// Loop through array from last element to first element.
	for (int i = (size - 2); i >= 0; i--)
	{
		// Set element to the right as current element.
		a[i + 1] = a[i];
	}

	// Set first value of array to saved last value.
	a[0] = temp;
}

// Main Function.
int main(void) {

	// Create array and call function to rotate.
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	rotate_right(10, a);

	// Print array.
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);

	return 0;
}
