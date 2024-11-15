#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int IsPrime(int Number) {
    if (Number <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= sqrt(Number); i++) {
        if (Number % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to find all prime numbers in the interval [Start, End]
void FindPrimesInRange(int Start, int End) {
    for (int Number = Start; Number <= End; Number++) {
        if (IsPrime(Number)) {
            printf("%d ", Number);
        }
    }
    printf("\n");
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
        // Call the FindPrimesInRange function to print all primes in the given range
        printf("Prime numbers between %d and %d are:\n", Start, End);
        FindPrimesInRange(Start, End);
    }

    return 0;
}

