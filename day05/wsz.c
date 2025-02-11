#include <stdio.h>


int main(void){
	int num=0;
	double monovalent=0;
	printf("请输入卫生纸的数量：");
	scanf("%d",&num);
	printf("请输入卫生纸单价：");
	scanf("%lg",&monovalent);
	printf("总价为%lg\n",num*monovalent);

	return 0;
}
