#include<stdio.h>
struct school{
	int age;
	int roll_no;
	
};
int solve(){
school sl;
sl.age=19;
sl.roll_no=82;
int x=sizeof(sl);
printf("the size is %d\n",x);
printf("the age is %d\n the roll no is %d\n",sl.age,sl.roll_no);
}
int main(){
	solve();
}

