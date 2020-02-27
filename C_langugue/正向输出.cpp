//正向输出一个数字
#include<stdio.h>
int main(){
	int x;
	int num1,num2;
	int t=0;
	scanf("%d",&x);
	while(x!=0){
		num1=x%10;
		t=t*10+num1;
		x/=10;
	}
	x=t;
	while(x!=0){
		num2=x%10;
		printf("%d",num2);
		x/=10;
	}

} 
