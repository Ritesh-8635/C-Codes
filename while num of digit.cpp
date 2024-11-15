#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("enter the numbers to count\n");
	scanf("%d",&num);
	if(num==0)
	{
		printf("1");
		
	}
	int count=0;
	num=abs(num);
	while(num>0)
	{
		num=num/10;
		count=count+1;
	}
	printf("the count is  %d\n ",count);
}
