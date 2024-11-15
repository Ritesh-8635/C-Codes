#include<stdio.h>
struct item
{
	int id;
	float price;                 
};
int main(){
	item it[3];
	int i;
	for(i=0;i<3;i++){
		printf("enter the id and price\n");
	    scanf("%d%f",&it[i].id,&it[i].price);
		
	}
	for(i=0;i<3;i++){
	
	printf("Id : %d\nprice :%f",it[i].id,it[i].price);
}
}

