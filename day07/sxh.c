#include <stdio.h>

int main(){

	int i=1,j=0,k=0;
	printf("水仙花数有");
	for(i=1;i<=9;i++){
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				if(i*100+j*10+k==i*i*i+j*j*j+k*k*k){
					printf("%d  ",i*100+j*10+k);
					
				
				}
				
				}
			}
		}
	printf("\n输出完毕\n");
return 0;
}
