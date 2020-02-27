//forÑ­»·¼ÆËã½×³Ë
#include<stdio.h>

int main(){
	int factorial=1;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	printf("the result is:%d",factorial);
	return 0;
} 
