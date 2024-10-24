#include <stdio.h>

// Copy one array into another without using the [] operator.
void copy(int size, int* input, int* output) {
	for (int i = 0; i < size; i++)
	{
		*(output + i) = *(input + i);
	}
}

// Print an array without using the [] operator.
void print(int size, int* output) {
	for (int i = 0; i < size; i++)
	{
		printf("%d", *(output + i));
	}
}

// Main function.
int main(void) {

	int input[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int output[10] = { 0 };

	copy(10, input, output); //implement this function!
	print(10, output); //implement this function!
	//prints: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

	return 0;

}