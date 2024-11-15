#include<stdio.h>
int main()
{
	int n ;
	int number=2;
	int sum=0;
	printf("enter the upper limit");
	scanf("%d",&n);
	while(number<=n)
	{
		sum =sum+number;
		number=number+2;
	}
	printf("%d",sum);
}

