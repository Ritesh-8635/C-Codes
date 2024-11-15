#include<stdio.h>

int main()
{
	int Quan,Price,disc;
	Price = 10;	
	scanf("Enter Quantity :%d",&Quan);
	
	if(Quan>100)
	{
		disc = Quan*Price*0.8;
		printf("The final Price after discount = %d",disc);
	}

}
