#pragma warning (disable : 4996)
#include <stdio.h>

double input();
double output(double money);

int main()
{
	double use,money;
	use = input();

	if (use >= 0)
	{
		money = (660 + 88.5 * use)*1.09;
	}
	
	output(money);

	return 0;
}

double input()
{
	double use;
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf("%lf", &use);

	return use;
}

double output(double money)
{
	return printf("���� ������� %lf�� �Դϴ�.", money);
}