//�Ƿ��������ᱻ������
#include<stdio.h>
void swap(int a,int b);
//void swap();����֪���������Ƽ� 

/*ʵ�ν�������ֵ���βΣ�����֮����������ϵ��
  �����ر��������ڿ飨�����ţ��ڴ��ڣ����˿飬���������ڡ�
  ����Ҳ�Ǳ��ر����� 
*/
int main(){
	int a=5;
	int b=6;
	swap(a,b);
	printf("a=%d b=%d",a,b);
	return 0;
} 

void swap(int x,int y){
	int t;
	t=x;
	x=y;
	y=t;
}
