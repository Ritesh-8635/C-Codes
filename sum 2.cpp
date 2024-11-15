#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	int n;
	bool c=false;
	int sum=0;
	
	
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
				c=arr[i];
				sum=sum+c;
			}
			
		}
	if(sum%2==0){
		printf("%d\n",arr[i]);
		break;
	}
}
n=n/10;
}

