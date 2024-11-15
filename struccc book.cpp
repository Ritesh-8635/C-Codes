#include<stdio.h>
struct book
{
	char title[50];
	char author[50];
	int price;                 
};
int main(){
	book bk[3];
	int i;
	for(i=0;i<3;i++){
		printf("enter the title ,author, price\n");
	    scanf("%s%s%d",bk[i].title,bk[i].author,&bk[i].price);	    
	}
	for(i=0;i<3;i++){
		printf("title : %s\nauthor: %s\nprice :%d\n",bk[i].title,bk[i].author,bk[i].price);
	}
	
}
