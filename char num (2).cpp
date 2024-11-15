#include<stdio.h>
int main()
{
	char a;
	printf("enter the cahracter");
	scanf("%c",&a);
	if(a>='A' && a<='z')
	{
		printf("the entered cgharacter is a alphabet");
		
	}
	else 
	{
		printf("the variable is not a alphabet");
	}
}
