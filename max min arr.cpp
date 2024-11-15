#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	int max,min;
	
	
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
	
			printf("%d\n",arr[i]);
		}
		
		max=arr[0];
		min=arr[0];
		
		for(i=0;i<size;i++){
			if(arr[i]>max){
				max=arr[i];
			}
			if(arr[i]<min){
				min=arr[i];
			}
		}
		
		printf("the max elements is %d\n",max);
		printf("the min elements is %d\n",min);
}

