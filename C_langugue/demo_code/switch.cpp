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
		case 1:  printf("1�·�");break; 
		case 2:  printf("2�·�");break; 
		case 3:  printf("3�·�");break; 
		case 4:  printf("4�·�");break; 
		case 5:  printf("5�·�");break; 
		case 6:  printf("6�·�");break; 
		case 7:  printf("7�·�");break; 
		case 8:  printf("8�·�");break; 
		case 9:  printf("9�·�");break; 
		case 10: printf("10�·�");break;
		case 11: printf("11�·�");break; 
		case 12: printf("12�·�");break;
	    default: printf("������"); 
    }
    return 0;
}