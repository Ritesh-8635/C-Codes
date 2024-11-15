#include <stdio.h>

int main() {
    int number, lastDigit, firstDigit;

    // Input a number from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Finding the last digit
    lastDigit = number % 10;

    // Finding the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Output the results
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}

