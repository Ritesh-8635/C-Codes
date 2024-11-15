#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	int b[100];
	
	
	printf("enter the size of array you want :\n");
	scanf("%d",&size);
	
	if(size==0){
		printf("the entered size is not valid");
	}
	for(i=0;i<size;i++){
		printf("enter the %d elements:\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]<0){
			neg++;
		}
		
		}
	printf("the negative count is  %d\n",neg);
}

