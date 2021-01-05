#include<stdio.h>

int main()
{
	double dday,dhour,dmin;
	int day,hour,min;
	double second;

	dday = 365.2422;
	day = (int)dday;
	dday = dday - (double)day; //0.2422

	dhour = dday * 24; //5.8128
	hour = (int)dhour;
	dday = dhour - (double)hour;//0.8128

	dmin = dday * 60;//48.768
	min = (int)dmin;
	dday = dmin - (double)min;//0.768

	second = dday * 60;//46.08

	dday = 365.2422;

	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초 입니다.",dday,day,hour,min,second);

	return 0;

}