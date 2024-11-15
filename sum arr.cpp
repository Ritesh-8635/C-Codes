#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	int sum=0;
	
	
	printf("enter the size of array you want :\n");
	scanf("%d",&size);
	
	if(size==0){
		printf("the entered size is not valid");
	}
	for(i=0;i<size;i++){
		printf("enter the %d elements:\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("the enterd array elemnts are :\n");
	for(i=0;i<size;i++){
		    sum= sum + arr[i];
	
			printf("%d\n",arr[i]);
		}
		
		printf("the sum of the element is %d\n",sum);
		
}

