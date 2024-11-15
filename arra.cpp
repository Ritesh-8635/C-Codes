#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	printf("enter the size of array you want :\n");
	scanf("%d",&size);
	for(i=0;i<=size;i++){
		printf("enter the array elements:\n");
		scanf("%d",&arr[i]);
	}
	
	printf("the array elemnts are:");
	for(i=0;i<=size;i++){
		printf("%d\n",arr[i]);
	}
}
