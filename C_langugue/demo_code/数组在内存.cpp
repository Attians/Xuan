//验证数字在内存中是连续存储的
#include<stdio.h>

int main(){
	int a[10];
	a[0]=5;
	a[1]=8;
	printf("%d\n",&a[0]);
	printf("%d\n",&a[1]);
	
	return 0;
} 
