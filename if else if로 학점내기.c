#include <stdio.h>

int main(void)
{
	int num=0;
	
	printf("당신의 학점은? : ");
	scanf("%d", &num);
	
	
	if(num>=95){
		printf("A+입니다.\n");
	}
	
	else if(num>=85){
		printf("B+입니다.\n");
	}
	
	
	else if(num>=80){
		printf("B입니다.\n");
	}
	
	else{
		printf("F입니다.\n");
	}
	
	return 0;
} 
