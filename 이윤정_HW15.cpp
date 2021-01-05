#pragma warning (disable : 4996)
#include <stdio.h>

double inputHeight();
double inputWeight();
double calBmi(double, double);
double output(double);

int main()
{
	double height,weight,bmi;

	weight = inputWeight();
	height = inputHeight();
	bmi = calBmi(weight, height);
	output(bmi);

	return 0;

}

double inputWeight()
{
	double w;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &w);

	return w;
}


double inputHeight()
{
	double h;
	printf("Ű�� �Է��ϼ���(m : ���ʹ���) : ");
	scanf("%lf", &h);

	return h;
}

double calBmi(double weight, double height)
{
	double bmi;
	bmi = weight / (height*height);

	return bmi;
}

double output(double bmi)
{
	if (bmi < 18.5)
	{
		return printf("����� BMI�� %.2lf�� ��ü���Դϴ�.", bmi);
	}
	else if (bmi < 25.0)
	{
		return printf("����� BMI�� %.2lf�� ����ü���Դϴ�.", bmi);
	}
	else if (bmi < 30.0)
	{
		return printf("����� BMI�� %.2lf�� ��ü���Դϴ�.", bmi);
	}
	else if (bmi < 40.0)
	{
		return printf("����� BMI�� %.2lf�� ���Դϴ�.", bmi);
	}
	else 
	{
		return printf("����� BMI�� %.2lf�� �����Դϴ�.", bmi);
	}
}