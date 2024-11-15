#include <stdio.h>

// Function to calculate the sum of all positive divisors of the number (excluding the number itself)
int SumOfDivisors(int Number) {
    int Sum = 0;
    for (int i = 1; i <= Number / 2; i++) {
        if (Number % i == 0) {
            Sum += i;
        }
    }
    return Sum;
}

// Function to check if the number is a perfect number
int IsPerfectNumber(int Number) {
    if (Number <= 1) {
        return 0; // False
    }
    if (SumOfDivisors(Number) == Number) {
        return 1; // True
    } else {
        return 0; // False
    }
}

// Function to find and print all perfect numbers in the interval [Start, End]
void FindPerfectNumbersInRange(int Start, int End) {
    for (int Number = Start; Number <= End; Number++) {
        if (IsPerfectNumber(Number)) {
            printf("%d\n", Number);
        }
    }
}

// Main program
int main() {
    int Start, End;

    // Input the interval range from the user
    printf("Enter the start of the interval: ");
    scanf("%d", &Start);
    printf("Enter the end of the interval: ");
    scanf("%d", &End);

    // Validate the interval range
    if (Start > End) {
        printf("Invalid interval. The start should be less than or equal to the end.\n");
    } else {
        // Call the FindPerfectNumbersInRange function to print all perfect numbers in the given range
        printf("Perfect numbers between %d and %d are:\n", Start, End);
        FindPerfectNumbersInRange(Start, End);
    }

    return 0;
}

