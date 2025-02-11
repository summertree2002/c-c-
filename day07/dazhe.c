#include <stdio.h>


int main (){
	float sum = 0;
	printf("请输入购物总金额：");
	scanf("%f",&sum);

	if(sum>500){
		sum *= 0.8;
	}else if(sum>=300){
		sum *=0.9;
	}else if(sum>=100){
		sum *=0.95;
	}else if(sum>0){
		sum *=0.99;
	}else if(sum<=0){
		printf("输入金额错误");
	}
	printf("总金额为%f\n",sum);

return 0;
}
