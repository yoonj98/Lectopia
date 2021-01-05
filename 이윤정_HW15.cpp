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
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &w);

	return w;
}


double inputHeight()
{
	double h;
	printf("키를 입력하세요(m : 미터단위) : ");
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
		return printf("당신의 BMI는 %.2lf로 저체중입니다.", bmi);
	}
	else if (bmi < 25.0)
	{
		return printf("당신의 BMI는 %.2lf로 정상체중입니다.", bmi);
	}
	else if (bmi < 30.0)
	{
		return printf("당신의 BMI는 %.2lf로 과체중입니다.", bmi);
	}
	else if (bmi < 40.0)
	{
		return printf("당신의 BMI는 %.2lf로 비만입니다.", bmi);
	}
	else 
	{
		return printf("당신의 BMI는 %.2lf로 고도비만입니다.", bmi);
	}
}