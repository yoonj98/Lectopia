#include<stdio.h>

double output(double distance,int hour, int min, double second);

int main()
{
	double distance, km,dhour,dmin,second;
	int hour, min;

	printf("�Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &distance);

	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
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
	return printf("%.2lf km -> %d�ð� %d�� %.3lf �� �ҿ��", distance, hour, min, second);
}