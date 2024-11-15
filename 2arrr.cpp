#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	int n;
	bool c=false;
	printf("enter the size of array you want :\n");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the %d elements:\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		
		n=arr[i];
		c=false;
		
		while(n!=10){
			if(n%10==2){
				c=true;
				break;
			}
			n=n/10;
			
		}
	if(c){
		printf("%d\n",arr[i]);
	}
}
}
