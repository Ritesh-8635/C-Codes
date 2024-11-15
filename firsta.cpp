#include<stdio.h>
int main()
{
	int num;
	printf("enter the number  \n");
	scanf("%d",&num);
	
	int firstdigit,lastdigit;
	lastdigit=num%10;
	printf("the lastdigit is %d\n",lastdigit);
	if(num==0)
	{
		printf("the first digit is 0\n");
	}
	firstdigit=num;
	for(num!=0;firstdigit>=10;)
	{
		firstdigit/=10;
		
	}
	
	printf("the first digit  is %d\n",firstdigit);
}
