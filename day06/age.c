#include <stdio.h>



int main(){
	int age=0;
	printf("请输入员工年龄：");
	scanf("%d",&age);

	if (age<18||age>60){
		
		printf("不是适工年龄\n");	

	}
	else{
		printf("是适工年龄\n");
	}

return 0;
}
