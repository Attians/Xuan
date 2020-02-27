//是否两个数会被交换？
#include<stdio.h>
void swap(int a,int b);
//void swap();不告知参数，不推荐 

/*实参仅仅传递值给形参，除此之外无其他联系。
  而当地变量仅仅在块（大括号）内存在，出了块，变量不存在。
  参数也是本地变量。 
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
