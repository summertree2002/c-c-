#include <stdio.h>

int main(){
	char status =0;
	printf("请输入订单的状态码:");
	scanf("%hhd", &status);

	if(status==0){
		printf("订单：待支付");
	}else if(status==1){
		printf("订单状态：待发货");
	}else if(status==2){
		printf("订单：运输中");
	}else if(status==3){
		printf("订单：派货中");
	}else if(status==4){
		printf("订单：已完成");
	}else {
		printf("未知订单状态！");
	}
	printf("\n");
return 0;	
}
