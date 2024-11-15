#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i=0;
	int b[1000];
	
	
	printf("enter the size of array you want :\n");
	scanf("%d",&size);
	
	if(size==0){
		printf("the entered size is not valid");
	}
	for(i=0;i<size;i++){
		printf("enter the %d elements:\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("the first array is : \n");
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
		}
		
		
	printf("the second array is : \n");
	for(i=0;i<size;i++){
		
		b[i]=arr[i];
		printf("%d\n",arr[i]);
		}
	
}

