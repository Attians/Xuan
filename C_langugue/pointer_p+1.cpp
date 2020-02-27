#include<stdio.h>
//p+1是p+sizeof(类型大小) 
int main(){
	int a[]={2,3,4,5};
	int *p=a;
	//*(p+n)=a[n]
	printf("%p\n",p); 
	printf("%p\n",p+1);
	char b[]={0,4,5,6,};
	char *q=b;
	printf("%p\n",q); 
	printf("%p\n",q+1);
	
	return 0;
}
