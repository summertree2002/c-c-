#include <stdio.h>

int main(){
	int i=1,j=1;
	for(j=1;j<=9;j++){
		for(i=1;i<=j;i++){
			printf("%d*%d=%d  ",i,j,i*j);
		}
	printf("\n");
	}
	return 0;
}
