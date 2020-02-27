//输出2000~2500之间的闰年
#include<stdio.h>
int main(){
	//如果不能整除4，则不为闰年。 
	int years=2000;
	while(years<=2500){
	    if((years%4 == 0&&years%100 != 0)||(years%400 == 0)){
			printf("%d\n",years);
			years=years+1;
		}
		else{
			years=years+1;
		}	
	}
	return 0;
} 
