//猜数游戏
#include<stdio.h>
int main(){
	int aim=66;
	int n=0;//次数变量 
	int num,new_num;
	scanf("%d",&num);
	do{
		n++; 
		if(num>aim){
			printf("the num is bigger than aim!");
		}else{
			printf("the num is smaller than aim!");
		}
		scanf("%d",&new_num);
		num=new_num;
	}while(num!=aim);
	printf("you are right!spend %d times",n);
	return 0;
} 
