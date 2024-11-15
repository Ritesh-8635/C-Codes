#include<stdio.h>

int natural(int num){
	int i;
	for(i=1;i<=num;i++){
		printf("%d\n",i);
	}
}
int main(){
	int num;
	printf("enter the limit\n");
	scanf("%d",&num);
	printf("the natural numbers from 1 to %d are\n",num);
	natural(num);
	
}
