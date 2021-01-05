#include <stdio.h>

int main()
{
	int history, korean, art,total;
	double average;

	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &history, &korean, &art);

	total = history + korean+ art;
	average = total / (double)3;

	printf("총점은 %d이고 평균은 %.2lf입니다.", total, average);

	return 0;
}