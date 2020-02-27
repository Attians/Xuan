/*统计输入数字出现的次数 
  16点42分
*/ 
#include<stdio.h>
int main(){
	const int number =10;
	int count[number];
	int i;
	int x;
	//初始化数组 
	for(i=0;i<number;i++){
		count[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<=9){
			count[x]++; 
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++){
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
} 
