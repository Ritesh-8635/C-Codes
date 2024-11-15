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
	
	printf("the negative elements in the array are\n");
	for(i=0;i<size;i++){
		if(arr[i]<0){
			printf("%d\n",arr[i]);
		}
	}
}
