/*����ʵ��ð�����򣬽�����ֵ������ײ����ڴ˹�����ֵ��С��Ԫ��
  ���ᣨ������һ������ȥ�� 
*/ 
#include<stdio.h>
int main(){
	int a[10];
	int j,k; 
	for(int i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	//������� 
	for(j=0;j<9;j++){ 
		for(k=0;k<9-j;k++){
			if(a[k]>a[k+1]){
				int t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
		}
	}
	//����������������� 
	for(int i=0;i<=9;i++){
		printf("%d ",a[i]); 
	}
	
	return 0;
	
} 
