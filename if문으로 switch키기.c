#include <stdio.h>

int main(void)
{
	int home=1;
	
	printf("�� �� ����ġ�� Ű�ڽ��ϱ�? : ");
	scanf("%d", &home);

	if (home == 1)
	{
		printf("������ ���� !\n");
		home++;
	}
	else if (home == 2)
	{
		printf("������ ���� !\n");
		home++;
	}
	else if (home == 3)
	{
		printf("�������� �۵� ����");
	}
	else 
	{
		printf("���� ����ġ�Դϴ�.");
	}
	
	return 0;
}
