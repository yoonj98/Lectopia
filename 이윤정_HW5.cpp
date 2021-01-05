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
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%lf", &use);

	return use;
}

double output(double money)
{
	return printf("전기 사용요금은 %lf원 입니다.", money);
}