#include<stdio.h>
#include<math.h>

int is_prime(int num){
	int i;

if (num<=1){
	return false;
}
	for(i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	
	return true;
}
int countsdigits(int num){

int digits=0;
while(num>0){
	digits = digits+1;
	num=num/10;
	
}
return digits;
}

int is_arm(int num){


int digits=countsdigits(num);
int sum=0;
int temp=num;
while(temp>0){
	int digit=temp%10;
	sum+=pow(digit,digit);
	temp=temp/10;
	
}

if(sum==num){
	return true;
}else{
	return false;
}
}

 int is_perf(int num){
 	int i;
 
 int sum=0;
 for(i=1;i<=num/2;i++){
 	if(num%i==0){
 		sum=sum+i;
 		
	 }
 }
 
 if(sum==num){
 	return true;
 	}else {
 		return false;
	 }
 }
 

int main(){
	int num;
    printf("enter the num :\n");
    scanf("%d",&num);

    if (is_prime(num)){
	printf("it is prime\n",num);
	}else {
		printf("not prime\n",num);
	}


    if(is_arm(num)){
	printf("it is arm\n",num);
	}else {
		printf("not arm\n",num);
	}


    if (is_perf(num)){
	printf("it is perf\n",num);
	}else {
		printf("not perf\n",num);
	}
	
	countsdigits(num);
	printf("the number of digit is :%d\n",countsdigits(num));

}
