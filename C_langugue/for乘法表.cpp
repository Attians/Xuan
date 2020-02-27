//Êä³ö99³Ë·¨±í
#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
	}
	return 0;
} 
