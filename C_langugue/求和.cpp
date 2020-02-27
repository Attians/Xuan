//求和i/n相加
#include<stdio.h>
int main(){
	int i,n;
	double sum=0.0;
	double sign=1.0;//+-+-+-
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=(sign/i);
		sign=-sign;
	}
	printf("%f",sum);
	return 0; 
} 
