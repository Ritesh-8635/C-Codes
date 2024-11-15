#include <stdio.h>

// Function to calculate factorial
int cubes(int n) {
    int cubes;
    cubes=n*n*n;
    return cubes;
}

// Function to check if a number is strong
int is_arm(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += cubes(digit);
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a arm number\n", originalNum);
        return 1;
    } else {
        printf("%d is not a arm number\n", originalNum);
        return 0;
    }
    
	
}
void find_is_arm(int start,int end){
		for(int num=start;num<=end;num++){
		
    	if(is_arm(num)){
    		printf("%d\n",num);
		}
	}
}
int main()
{
    int start;
    int end;
    printf("Enter the start:\n");
    scanf("%d", &start);
   
    printf("Enter the end:\n");
    scanf("%d", &end);
    find_is_arm(start,end);
    return 0;
}

