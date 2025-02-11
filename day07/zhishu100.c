#include <stdio.h>

int main (){

	int i=1,j=1,k=0,c=0;
	for(i=1;i<=100;i++){
		for(j=1;j<=i;j++){
			if(i%j==0){
				c++;
			}
		

			if(c=2){
				printf("%d  ",i);
				k++;
				if(k=5){
                                printf("\n");
                                k=0;
                        	}
			}
		}
	}
			
		
	
return 0;
}
