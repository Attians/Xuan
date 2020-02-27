//计算两个数的最大值 
#include<stdio.h>
int main(){
	int max(int x,int y);
	int a,b,c;
	printf("input first number:\n");
	scanf("%d",&a);
	printf("input second number:\n");
	scanf("%d",&b);
	c=max(a,b);
	printf("the max is %d\n",c);
	return 0;
} 
int max(int x ,int y){
	int z;
	if(x>y) z=x;
	else z=y;
	return (z);
}
