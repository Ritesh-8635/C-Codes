#include<stdio.h>
int main()
{
	int x,y,a,result;
	printf("enter the first number");
	scanf("%d",&x);
	printf("enter the second  number");
	scanf("%d",&y);
	printf("what operation you want to perform\n");
	printf("for addition enter 1\n  for subtraction enter 2\n for multiplication enter 3\n for div enter 4");
	scanf("%d",&a);
	switch(a)
	{
		case(1):
			result = x+y;
			printf("the resut of addition  is  %d \n",result);
			break;
		
		case(2):
		    result = x-y;
			printf("the resut of subtraction  is  %d \n",result);
			break;	
			
		case(3):
			result = x*y;
			printf("the resut of multiplication  is  %d \n",result);
			break;
			
		case(4):
			result = x/y;
			printf("the resut of multiplication  is  %d \n",result);
			break;
		
			
	}
}
