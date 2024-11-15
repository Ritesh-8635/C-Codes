#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	printf("enter the size of array you want :\n");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the %d elements:\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("the array elemnts are:\n");
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			printf("the even numbers is   %d\n",arr[i]);
		}
		else {
			printf("the odd numbers is  %d\n",arr[i]);
		}
		
	}
	
}
