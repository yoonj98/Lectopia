#include<stdio.h>

double output(double distance,int hour, int min, double second);

int main()
{
	double distance, km,dhour,dmin,second;
	int hour, min;

	printf("거리를 입력하시오(km단위) : ");
	scanf("%lf", &distance);

	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &km);

	dhour = distance / km;
	hour = (int)dhour;

	dmin = (dhour - (double)hour) * 60;
	min = (int)dmin;

	second = (dmin - (double)min) * 60;

	output(distance, hour, min, second);

	return 0;

}

double output(double distance, int hour, int min, double second)
{
	return printf("%.2lf km -> %d시간 %d분 %.3lf 초 소요됨", distance, hour, min, second);
}