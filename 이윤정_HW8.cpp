#include <stdio.h>

int main()
{
	int history, korean, art,total;
	double average;

	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &history, &korean, &art);

	total = history + korean+ art;
	average = total / (double)3;

	printf("������ %d�̰� ����� %.2lf�Դϴ�.", total, average);

	return 0;
}