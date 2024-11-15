#include<stdio.h>
int main()
{
	int num=1;
	int n;
	int mul;
	printf("enter the number for which you want the multiplication table\n");
	scanf("%d",&n);
	while(num<=10)
	{
		mul=n*num;
		printf("\n%d * %d = %d",n,num,n*num);
		
		num++;
	}
}
