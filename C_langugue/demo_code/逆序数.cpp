//求一个数的逆序数,例700  输出7 
#include<stdio.h>
int main(){
	int num,digits;
	scanf("%d",&num);
	while(num!=0&&num<1000){
		digits=num%10;//个位数
		printf("%d",digits);
		num/=10;
	}
	return 0;
	
} 

