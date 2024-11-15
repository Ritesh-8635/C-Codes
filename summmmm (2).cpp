#include<stdio.h>
int main()
{
	int a,sum,n,add;
	n=1;
	printf("enter the number \n");
	scanf("%d",&a);
	while(n<=a)
	{
		sum=sum+n;
		add=n;
		printf("%d\n",add);
		n++;
	}
	printf("the sum is  %d",sum);
	
	
}
