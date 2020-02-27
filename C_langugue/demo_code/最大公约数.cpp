//求最大公约数
/*方法1：从2开始循环找出同时可以被两个数整除的最大公约数。 
  方法2：辗转相除法。 
*/ 
#include<stdio.h>
int main(){
    //	枚举法 
    //	int a,b,min;
    //	int result;
    //	scanf("%d",&a);
    //	scanf("%d",&b);
    //	if(a>b){
    //		min=b;
    //	}else{
    //		min=a;
    //	}
    //	for(int i=1;i<min;i++){
    //		if(b%i==0){
    //			if(a%i==0){
    //				result=i;
    //			}
    //		}
    //	}
    //	printf("result=%d",result);
    //	return 0;

    /*辗转相除法
    1.如果b=0,则a为最大公约数,结束。 
	2.否则，计算a/b的余数,让a等于b，让b等于那个余数
	例
	a   b  t
	12  18  12
	18  12  6
	12  6   0
	6   0
	*/ 
	int a,b,t;
	scanf("%d",&a);
    scanf("%d",&b);
    while(b!=0){
    	t=a%b;
        a=b;
        b=t;
	}
	printf("%d\n",a);
	return 0;
	
} 
