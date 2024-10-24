#include <stdio.h>

// Reverse an array without using the [] operator.
void reverse(int size, int* a) {

	// Loop through half of the array.
	for (int i = 0; i < (size / 2); i++)
	{
		// Store current element value temporarily.
		int temp = *(a + i);

		// Set current element as (i) away from last element.
		*(a + i) = *(a + size - 1 - i);

		// Set (i) away from first element as stored value.
		*(a + size - 1 - i) = temp;
	}
}

// Print an array without using the [] operator.
void print(int size, int* a) {
	for (int i = 0; i < size - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d", *(a + size - 1));
}

// Main function.
int main(void) {

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	reverse(10, a); //implement this function!
	print(10, a); //implement this function!
	//prints: 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

	return 0;
}