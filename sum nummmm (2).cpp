#include<stdio.h>
int main()
{
	int n=1;
	int x;
	int sum=0;
	printf("enterr the limit");
	scanf("%d",&x);
	while(n<=x)
	{
		sum=sum+n;

		n++;
	}
	printf("%d\n",sum);
	
	
}
