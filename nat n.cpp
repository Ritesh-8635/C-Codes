#include<stdio.h>
int main()
{
	int number=1;
	int n;
	printf("enter the limit  \n");
	scanf("%d",&n);
	int sum=0;
	while(number<=n)
	{
		printf("%d\n",number);
		sum=sum+number;
		number++;
	}
	printf(" the sum of number is  %d",sum);
}
