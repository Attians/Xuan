//���2000~2500֮�������
#include<stdio.h>
int main(){
	//�����������4����Ϊ���ꡣ 
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
