/*
	Name: xax
	Copyright:xax 
	Author: xax
	Date: 27/02/20 16:11
	Description:字符串的函数 
*/
#include<stdio.h>
#include<string.h>
int main(){
//	int ch;
//	while((ch=getchar())!=EOF){
//		putchar(ch);
//	}
//	printf("EOF\n");

    
    char line[]="hello";
    printf("%d\n",strlen(line));
    printf("%d\n",sizeof(line));
    
    char s1[]="abc";
    char s2[]="Abc";
    //返回0相等 1是不相等 
    printf("%d",strcmp(s1,s2));
//    strcpy(s1,s2);
//    printf("%5s",*s1); 
    strchr(s1,'a');
    return 0;
}

