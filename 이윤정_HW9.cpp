#include <stdio.h>
int input();

int main()
{
	int number;
	number=input();

	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x�Դϴ�.", number);

	return 0;
}

int input()
{
	int number;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &number);

	return number;
}