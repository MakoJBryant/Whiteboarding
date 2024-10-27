#include <stdio.h>

// Declare functions.
int* getSmallestVar(int* var0, int* var1, int* var2);
int* getMiddleVar(int* var0, int* var1, int* var2);
int* getLargestVar(int* var0, int* var1, int* var2);


int main(void) {

	//make the code work for any values for a, b, c
	int a = 55451;
	int b = 12;
	int c = 8846463;

	int* min_var = 0;
	int* mid_var = 0;
	int* max_var = 0;

	min_var = getSmallestVar(&a, &b, &c);
	mid_var = getMiddleVar(&a, &b, &c);
	max_var = getLargestVar(&a, &b, &c);

	printf("min: %d\n", *min_var);
	printf("mid: %d\n", *mid_var);
	printf("max: %d\n", *max_var);

	return 0;
}

// Get the pointer of the smallest variable.
int* getSmallestVar(int* var0, int* var1, int* var2) {

	// Pass the pointer var0 into a temp pointer.
	int* min_var = var0;

	if (*var1 < *min_var) {
		// Set min value variable to var1.
		min_var = var1;
	}
	
	if (*var2 < *min_var) {
		// Set min value variable to var2.
		min_var = var2;
	}

	return min_var;
}

// Get the pointer of the middle variable.
int* getMiddleVar(int* var0, int* var1, int* var2) {

	int* smallestVar = getSmallestVar(var0, var1, var2);
	int* largestVar = getLargestVar(var0, var1, var2);
	int* mid_var = var0;

	if (*var1 > *smallestVar && *var1 < *largestVar) {
		// If var1 isn't smallest or largest, it's the mid.
		mid_var = var1;
	}
	if (*var2 > *smallestVar && *var2 < *largestVar) {
		// If var2 isn't smallest or largest, it's the mid.
		mid_var = var2;
	}
	
	// If var1 and var2 aren't the mid, then it's var0.
	return mid_var;
}

// Get the pointer of the largest variable.
int* getLargestVar(int* var0, int* var1, int* var2) {

	// Pass the pointer var0 into a temp pointer.
	int* max_var = var0;

	if (*var1 > *max_var) {
		// Set max value variable to var1.
		max_var = var1;
	}

	if (*var2 > *max_var) {
		// Set max value variable to var2.
		max_var = var2;
	}

	return max_var;
}

