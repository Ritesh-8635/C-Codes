#include<stdio.h>
int main()
{
	int number;
	printf("enter the starting number\n");
	scanf("%d",&number);
	int n;
	printf("enter the limit  \n");
	scanf("%d",&n);
	int sum=0;
	while(number<=n)
	{
		
		if(number%2==0)
		{
			printf("%d\n",number);
			sum = sum+number;
		}
	    number++;
	}
		
	
	printf(" the sum of number is  %d\n",sum);
}
