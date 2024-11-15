#include<stdio.h>
int main()
{
	int a;
	int n;
	int sum=0;
	printf("enter the limit");
	scanf("%d",&n);
	for(a=1;a<=n;a+=2)
	{
		sum=sum+a;
	    printf("%d\n",a);
	}
	printf("the sum is %d\n",sum);
}
