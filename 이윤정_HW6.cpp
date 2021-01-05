#pragma warning (disable : 4996)
#include <stdio.h>

double input();
double output(double C);

int main()
{
	double F, C;

	F = input();
	C = (double)5 * (F - 32) / 9;
	output(C);

	return 0;
}

double input()
{
	double F;
	printf("화씨 온도를 입력하시오 : ");
	scanf("%lf", &F);
	return F;
}

double output(double C)
{
	return printf("섭씨 온도는 %.1lf입니다.", C);
}