#include<stdio.h>
int main()
{
	int n,year;
	printf("enter the month number \n");
	scanf("%d",&n);
	printf("enter the year");
	scanf("%d",&year);

	switch(n)
	{
		case(1):
			printf("january");
			printf("\n it has 31 days");
		    break;
		    
		case(3):
			printf("march");
			printf("\n it has 31 days");
		    break;
		    
		case(5):
			printf("may");
			printf("\n it has 31 days");
		    break;
		    
		case(7):
			printf("july");
			printf("\n it has 31 days");
		    break;
		    
		case(8):
			printf("august");
			printf("\n it has 31 days");
		    break;
		    
		case(10):
			printf("october");
			printf("\n it has 31 days");
		    break;
			
		case(12):
			printf("december");
			printf("\n it has 31 days");
		    break;
		    
		case(2):
				if(year%4==0)
	{
		printf("the february month has 29 days\n");
	}else {
		printf("february");
		printf("\n it has 28 days");
		
	}

		    break;
		    
		case(4):
			printf("april");
			printf("\n it has 30 days");
		    break;
		    
		case(6):
			printf("june");
			printf("\n it has 30 days");
		    break;
		    
		case(9):
			printf("september");
			printf("\n it has 30 days");
		    break;
		
		case(11):
			printf("november");
			printf("\n it has 30 days");
		    break;
		    
		default:
			printf("enter the correct week number");
		
	}
	
	
}
