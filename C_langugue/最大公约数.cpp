//�����Լ��
/*����1����2��ʼѭ���ҳ�ͬʱ���Ա����������������Լ���� 
  ����2��շת������� 
*/ 
#include<stdio.h>
int main(){
    //	ö�ٷ� 
    //	int a,b,min;
    //	int result;
    //	scanf("%d",&a);
    //	scanf("%d",&b);
    //	if(a>b){
    //		min=b;
    //	}else{
    //		min=a;
    //	}
    //	for(int i=1;i<min;i++){
    //		if(b%i==0){
    //			if(a%i==0){
    //				result=i;
    //			}
    //		}
    //	}
    //	printf("result=%d",result);
    //	return 0;

    /*շת�����
    1.���b=0,��aΪ���Լ��,������ 
	2.���򣬼���a/b������,��a����b����b�����Ǹ�����
	��
	a   b  t
	12  18  12
	18  12  6
	12  6   0
	6   0
	*/ 
	int a,b,t;
	scanf("%d",&a);
    scanf("%d",&b);
    while(b!=0){
    	t=a%b;
        a=b;
        b=t;
	}
	printf("%d\n",a);
	return 0;
	
} 
