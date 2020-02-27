/*
	Name: switch...case 
	Copyright:xax 
	Author: xax
	Date: 27/02/20 16:03
	Description: 
*/

#include<stdio.h>
int main(){
	int month;
	scanf("%d",&month);
	switch(month) {
		case 1:  printf("1月份");break; 
		case 2:  printf("2月份");break; 
		case 3:  printf("3月份");break; 
		case 4:  printf("4月份");break; 
		case 5:  printf("5月份");break; 
		case 6:  printf("6月份");break; 
		case 7:  printf("7月份");break; 
		case 8:  printf("8月份");break; 
		case 9:  printf("9月份");break; 
		case 10: printf("10月份");break;
		case 11: printf("11月份");break; 
		case 12: printf("12月份");break;
	    default: printf("不存在"); 
    }
    return 0;
}
