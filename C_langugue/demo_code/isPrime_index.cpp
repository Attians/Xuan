/*�����������xΪ��������2x,3x...nx����Ϊ0����ΪisPrime=1��Ԫ����� 
*/
#include<stdio.h>
int main(){
	const int MaxNumber=25;
	int x;
	int isPrime[MaxNumber];
	for(int i=0;i<MaxNumber;i++){
		isPrime[i]=1;
	}
	for(x=2;x<MaxNumber;x++){
		if(isPrime[x]){
		for(int i=2;x*i<MaxNumber;i++){
			isPrime[i*x]=0;
		}
	}
	}
	for(int i=2;i<MaxNumber;i++){
		if(isPrime[i]){
			printf("%d ",i);
		}
	}
	return 0;
} 
