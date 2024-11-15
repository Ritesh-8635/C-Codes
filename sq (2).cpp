#include<stdio.h>
int square(int a);
int main()
{
	int n;
	n=square(5);
	printf("result is %d:\n",n);
}
int square(int a)
{
	int c=a*a;
	return c;
}
