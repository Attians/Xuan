//输出前50个的素数
#include<stdio.h>
int main(){
	int x; 
	int count=0; 
	for(x=1;count<50;x++){
		int isPrime=1;//是否为素数的标识
		for(int i=2;i<x;i++){
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			count++;
			printf("%d\t",x);
			if(count%5==0){
				printf("\n");
			}
		}
	}
	return 0;
} 
