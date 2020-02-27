//计算一个数的位数
#include<stdio.h>

int main(){
	int n=0;
	int x;
	scanf("%d",&x);
	while(x>0){
		n++;
		x/=10;
	}
	printf("the n is :%d\n",n);
	
	return 0;
	
} 
