#include <stdio.h>

int main(void)
{
	int home=1;
	
	printf("몇 번 스위치를 키겠습니까? : ");
	scanf("%d", &home);

	if (home == 1)
	{
		printf("전등이 켜짐 !\n");
		home++;
	}
	else if (home == 2)
	{
		printf("전등이 꺼짐 !\n");
		home++;
	}
	else if (home == 3)
	{
		printf("고장으로 작동 안함");
	}
	else 
	{
		printf("없는 스위치입니다.");
	}
	
	return 0;
}
