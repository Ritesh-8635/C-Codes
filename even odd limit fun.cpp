#include<stdio.h>

void even_odd(int num){
	int i=0;
	for(i=0;i<=num;i++){
		if(i%2==0){
			printf("%d is even number \n",i);
		}
		else{
			printf("%d is odd number \n",i);
		}
	}
}

void range_even_odd(int start,int end){
	for(int num=start;num<=end;num++){
		even_odd(num);
		
		}
}


int main(){
	int start,end;
	printf("enter the start and end\n");
	scanf("%d%d",&start,&end);
	
	range_even_odd(start,end);
	return 0;
}
