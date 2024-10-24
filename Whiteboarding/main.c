#include <stdio.h>

void sort(int size, int* a);
int sorted(int size, int* a);
void insert_sorted(int size, int* a, int* b);
void reverse(int size, int* a);
void copy(int size, int* input, int* output);
void print(int size, int* a);

// Main function.
int main(void) {

	int a[10] = { -4, 1, 7, 2, 5, 6, 3, -8, 9, -2 };
	int b[10] = { 0 };

	insert_sorted(10, a, b); //implement this function!
	print(10, b); //implement this function!
	//prints: -8, -4, -2, 1, 2, 3, 5, 6, 7, 9

	return 0;
}

// Sort an array from least (at left) to most (at right).
void sort(int size, int* a) {

	// While array is not sorted:
	while (!sorted(size, a)) {

		// For each element of the array:
		for (int i = 0; i < size - 1; i++)
		{

			// If the current index is greater than the next index:
			if (*(a + i) > *(a + i + 1)) {

				// Save value of array at current index.
				int temp = *(a + i);

				// Set value at current index to value at next index.
				*(a + i) = *(a + i + 1);

				// Set value at next index with original value at current index.
				*(a + i + 1) = temp;
			}
		}
	}
}

// Check if a given array is sorted without using [] operator.
int sorted(int size, int* a) {

	// Loop through array from first element to last:
	for (int i = 0; i < size; i++) {

		// If current element is less than previous element:
		if (*(a + i) < *(a + i - 1)) {

			// Array is not sorted.
			return 0;
		}
	}

	// Array is sorted.
	return 1;
}

// Sort an array without using the [] operator.
void insert_sorted(int size, int* a, int* b) {

	// Copy array a into array b.
	copy(size, a, b);
	
	// Sort array b.
	sort(size, b);
}

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

// Copy one array into another without using the [] operator.
void copy(int size, int* input, int* output) {
	for (int i = 0; i < size; i++)
	{
		*(output + i) = *(input + i);
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
