#include<stdio.h>
int main()
{
	int arr[100][100];
	int i,j;
	int size;
	
	printf("enter the size ;");
	scanf("%d",&size);
	printf("enter the array elements");
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&arr[i][j]);
			
		}
		
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				
		        printf("%d\t",arr[i][j]);
			
		
		}
		printf("\n");
		
	}
	
	return 0;

}
}
