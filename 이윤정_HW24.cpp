#pragma warning (disable : 4996)
#include <stdio.h>

int input();
int calculate(int  cm);
int output(double m,int day);

int main()
{
	int cm,day;
	double m;

	cm = input();
	m = (double)cm*0.01;
	day = calculate(cm);
	output(m,day);

	return 0;
}

int input() {
	int cm;
	printf("우물의 깊이를 입력하시오(단위 cm): ");
	scanf("%d", &cm);
	return cm;
}

int calculate(int cm)
{
	int i;
	int day = 0;
	int distance=0;

	while(1)
		{
			if (cm == 0)
			{
				break;
			}
			++day;
			distance += 50;
			if (distance >= cm) {
				break;
			}
			distance -= 20;
			if (distance >= cm) {
				break;
			}
		}
	return day;
}

int output(double m,int day)
{
	return printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.", m, day);
}