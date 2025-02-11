#include <stdio.h>

int main(){
	int result=1,i=2;
	
	for(;i<=10;i+=2){
		result *=i;
	}
	printf("2~10偶数的累乘为：%d\n",result);

}
