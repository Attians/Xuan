//��һ������������,��700  ���7 
#include<stdio.h>
int main(){
	int num,digits;
	scanf("%d",&num);
	while(num!=0&&num<1000){
		digits=num%10;//��λ��
		printf("%d",digits);
		num/=10;
	}
	return 0;
	
} 

