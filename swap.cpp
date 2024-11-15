#include<stdio.h>

int main()
{
    int number, lastDigit,middigit=1,firstDigit,sum=0;

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
        middigit*=10;
    }
    sum=firstDigit+lastDigit;
    printf("the sum is %d\n",sum);
    // Output the results
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("the swaped number is  %d%d%d\n",lastDigit,middigit,firstDigit);
}

