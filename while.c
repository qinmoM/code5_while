#include<stdio.h>
int main()
{
	int a=0,i=1;
	printf("�����벻����60����\n");
	while (a < 60)
	{
		printf("��%d��\n", i);
		i=i+1;
		scanf_s("%d", &a);
	}
	printf("���");
	return 0;
}