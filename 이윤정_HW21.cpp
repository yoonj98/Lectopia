#include <stdio.h>

int main()
{
	double h1, h2, h3, h4, h5,mean=0;

	printf("1번 학생의 키는? ");
	scanf("%lf", &h1);

	printf("2번 학생의 키는? ");
	scanf("%lf", &h2);

	printf("3번 학생의 키는? ");
	scanf("%lf", &h3);

	printf("4번 학생의 키는? ");
	scanf("%lf", &h4);

	printf("5번 학생의 키는? ");
	scanf("%lf", &h5);

	mean = (h1 + h2 + h3 + h4 + h5) / (double)5;

	printf("다섯 명의 평균 키는 %.1lf입니다.", mean);

	return 0;
}