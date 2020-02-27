/*
	Name: xax 
	Copyright: xax
	Author: xax
	Date: 27/02/20 17:21
	Description: 利用for循环打印图案 
*/
#include<stdio.h>
int main(){
	int i,j;
	//i控制列，j控制行
	for(i=1;i<=4;i++){
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	} 
	for(i=3;i>=1;i--){
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	} 
    
	
	return 0;
} 

