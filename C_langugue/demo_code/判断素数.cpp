//ËØÊı
#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int isPrime=1;
	for(int i=2;i<x;i++){
		if(x%i==0){
			isPrime=0;
		}
	}
	if(isPrime==1){
		printf("it's a prime num!");
	}else{
		printf("it's not a prime num!");
	}
	return 0; 
} 
