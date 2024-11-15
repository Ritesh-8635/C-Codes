
#include<stdio.h>
int square(int a);


int main()
{
	int n;
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	n=square(a);
	printf("result is %d:\n",n);
}
int square(int a)
{
	int c=a*a;
	return c;
}
