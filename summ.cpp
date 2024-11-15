#include<stdio.h>

int main()
{
    int number, lastDigit, firstDigit,sum=0;

    // Input a number from user
    printf("Enter an integer:\n ");
    scanf("%d", &number);

    // Finding the last digit
    lastDigit = number % 10;

    // Finding the first digit
    firstDigit = number;
    while (firstDigit >= 10) 
	{
        firstDigit /= 10;
    }
    sum=firstDigit+lastDigit;
    printf("the sum is %d\n",sum);
    // Output the results
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
}

