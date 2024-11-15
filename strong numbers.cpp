#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is strong
int Is_strong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a strong number\n", originalNum);
        return 1;
    } else {
        printf("%d is not a strong number\n", originalNum);
        return 0;
    }
}

int main() {
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    Is_strong(num);
    return 0;
}

