//���ǰ50��������
#include<stdio.h>
int main(){
	int x; 
	int count=0; 
	for(x=1;count<50;x++){
		int isPrime=1;//�Ƿ�Ϊ�����ı�ʶ
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
