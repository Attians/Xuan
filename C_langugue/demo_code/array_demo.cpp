/*
	Name: xax
	Copyright: xax
	Author: xax
	Date: 27/02/20 17:41
	Description: 数组的demo--斐波那契数列 
*/
#include<stdio.h>
int main(){
	int a[20]={1,1};
	for(int i=2;i<20;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=1;i<=20;i++){
		printf("%d\t",a[i-1]);
		if(i%5==0){
			printf("\n");
		}
	}
	
	return 0;
}

