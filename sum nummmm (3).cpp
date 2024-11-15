#include<stdio.h>
int main()
{
	int a,sum,n;
	n=1;
	printf("enter the number \n");
	scanf("%d",&a);
	while(n<=a)
	{
		sum=sum+n;
		n++;
	}
	printf("the sum is  %d",sum);
	
	
}
