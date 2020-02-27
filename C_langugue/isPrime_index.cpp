/*构造参数表，令x为素数，将2x,3x...nx设置为0，将为isPrime=1的元素输出 
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
