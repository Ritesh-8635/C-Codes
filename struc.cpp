#include<stdio.h>
struct item
{
	int id;
	float price;                 
};
int main(){
	item it;
	it.id ;
	it.price;
	printf("enter the id and price\n");
	scanf("%d%f",&it.id,&it.price);
	printf("Id : %d\nprice :%f",it.id,it.price);
}
