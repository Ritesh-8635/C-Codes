#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, swappedNum;
    int firstDigit, lastDigit, divisor = 1;

    printf("Enter an number: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit and the divisor
    while (num >= 10) {
        num /= 10;
        divisor *= 10;
    }
    firstDigit = num;

    // Swap the first and last digits
    swappedNum = lastDigit * divisor + (originalNum % divisor) - lastDigit + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}

