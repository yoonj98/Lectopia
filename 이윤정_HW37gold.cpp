#pragma warning (disable : 4996)
#include <stdio.h>

void myflush();
void goldcal(int num);

int main()
{
	int num=0;

	while (1 > num || num > 200)
	{
		printf("기사의 근무일수를 입력하시오 :");
		scanf("%d", &num);
		myflush();
	}

	goldcal(num);

	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

void goldcal(int num)
{
	int i, j,flag=0;
	int sum = 0;

	for (i = 1;; i++)
	{
		for (j = 0; j < i; j++)
		{
			sum += i;
			flag++;
			if (flag == num)
			{
				break;
			}
		}
		if (flag == num)
		{
			break;
		}
	}
	printf("근무일 : %d일 / 총 금화 수 : %d개", num, sum);
}