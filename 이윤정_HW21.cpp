#include <stdio.h>

int main()
{
	double h1, h2, h3, h4, h5,mean=0;

	printf("1�� �л��� Ű��? ");
	scanf("%lf", &h1);

	printf("2�� �л��� Ű��? ");
	scanf("%lf", &h2);

	printf("3�� �л��� Ű��? ");
	scanf("%lf", &h3);

	printf("4�� �л��� Ű��? ");
	scanf("%lf", &h4);

	printf("5�� �л��� Ű��? ");
	scanf("%lf", &h5);

	mean = (h1 + h2 + h3 + h4 + h5) / (double)5;

	printf("�ټ� ���� ��� Ű�� %.1lf�Դϴ�.", mean);

	return 0;
}