//Ѱ�������Сֵ
#include<stdio.h>
void minmax(int a[],int len,int *max,int *min);
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int min=0;
	int max=0;
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("the max:%d\n",max);
	printf("the min:%d",min);
	
	return 0;
	
} 
void minmax(int a[],int len,int *max,int *min){
	//����һ������Ԫ�ظ�ֵ��*max=*min,�ӵڶ�����ʼ�����Ƚ� 
	*min=*max=a[0];
	for(int i=1;i<len;i++){
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}
	}
}
