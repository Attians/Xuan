/*数组实现冒泡排序，将最大的值沉入最底部，在此过程中值更小的元素
  将会（像起泡一样升上去） 
*/ 
#include<stdio.h>
int main(){
	int a[10];
	int j,k; 
	for(int i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	//排序操作 
	for(j=0;j<9;j++){ 
		for(k=0;k<9-j;k++){
			if(a[k]>a[k+1]){
				int t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
		}
	}
	//输出最终排序后的数组 
	for(int i=0;i<=9;i++){
		printf("%d ",a[i]); 
	}
	
	return 0;
	
} 
