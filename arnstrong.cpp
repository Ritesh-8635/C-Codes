#include <stdio.h>

// Function to calculate factorial
int cubes(int n) {
    int cubes;
    cubes=n*n*n;
    return cubes;
}

// Function to check if a number is strong
int is_arm(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += cubes(digit);
        num /= 10;
    };
    printf("sum is %d\n",sum);

    if (sum == originalNum) {
        printf("%d is a arm number\n", originalNum);
        return 1;
    } else {
        printf("%d is not a arm number\n", originalNum);
        return 0;
    }
}1

int main() {
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    is_arm(num);
    return 0;
}

