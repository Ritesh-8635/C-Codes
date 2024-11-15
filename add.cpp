

#include<stdio.h>
void hello();
int Add(int a,int b);
int main()
{
	int n;
	hello();
	n=Add(50,20);
	printf("result is %d:\n",n);
}
void hello()
{
	printf("hello ramesh\n");
	printf("hello ram\n");
}
int Add(int a,int b)
{
	int c=a+b;
	return c;
}
