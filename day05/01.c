#include <stdio.h>


 int main (void){
 	int a=0,b=0,c=0;
	printf("现在计算a/b的值\n判断是否能整除\n不能就输出余数。\nab两个数均为整数，请先输入a的值。\n");
	scanf("%d",&a);	
	printf("请再输入b的值。\n");
	scanf("%d",&b);
	c=a%b;
	printf("计算结果：a/b=%d\n",a/b);
	if(c==0){
		printf("能够整除\n");
	}
	else{
		printf("不能够整除\n");
	printf("余数为%d\n",c);
	}
 return 0;
 }
