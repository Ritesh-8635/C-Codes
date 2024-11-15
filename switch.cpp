#include<stdio.h>
int main()
{
	char n;
	printf("enter the character \n");
	scanf("%c",&n);

	switch(n)
	{
		case('a'):
			printf("\n it is a vowel");
		    break;
		    
		case('e'):
			printf("\n it is a vowel");
		    break;
		    
		    
		case('i'):
			printf("\n it is a vowel");
		    break;
		    
		    
		case('o'):
			printf("\n it is a vowel");
		    break;
		    
		case('u'):
			printf("\n it is a vowel");
		    break;
		    
	
		default:
			if(n>='a' && n<='z')
			{
				printf("the entered character is a consonant\n");
			}
			else{
				printf("enter the correct character");
			}
			
		
	}
	
	
}
