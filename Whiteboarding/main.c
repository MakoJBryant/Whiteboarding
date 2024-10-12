#include <stdio.h>

// Initialize functions.
void labSubmission3_3();
void labSubmission3_2();
void labSubmission3_1();

// Main function.
int main(void) {




    return 0;
}

// Create a program that counts to a certain number using a for loop.
void labSubmission3_3() {

    int input = 0;
    int compound = 0;

    printf("input: ");
    scanf_s("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        int cubed = (i * i * i);
        printf("%d cubed = %d\n", i, cubed);

        compound += cubed;
    }

    printf("compound = %d", compound);
    return;
}

// Create a program that adds numbers until you exceed the number 21.
void labSubmission3_2() {

    int bust = 21;
    int value = 0;
    int timesRepeated = 0;
    int i = 0;

    while (value <= bust) {
        printf("enter input: ");
        scanf_s("%d", &i);

        value += i;
        timesRepeated++;
    }

    printf("%d input(s) to get over 21", timesRepeated);
    return;
}

// Create a program that adds as many numbers as you would like together.
void labSubmission3_1() {

    int count = 0;
    int total = 0;
    int i = 0;

    printf("enter input count: ");
    scanf_s("%d", &count);

    while (i < count)
    {
        int input = 0;

        printf("enter input %d: ", i);
        scanf_s("%d", &input);

        total += input;

        i++;
    }

    printf("total: %d", total);
    return;
}



