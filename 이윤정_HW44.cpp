#pragma warning (disable : 4996)
#include <stdio.h>

void input(int*);
void myflush();
void odd_even(int*,char* ch);
void output(int*, char* ch);

int main()
{
	int  range[2];
	char ch[2];

	input(range);
	odd_even(range,ch);
	output(range, ch);

	return 0;
}

void input(int *range)
{
	int res;

		while (1)
		{
			printf("시작 값을 입력하세요 : ");
			res = scanf("%d", &range[0]);
			if (res == 1)
			{
				if (range[0] < 0)
				{
					continue;
				}
				else
					break;
			}
			else
			{
				myflush();
				continue;
			}
		}

		while (1)
		{
			printf("끝값을 입력하세요 : ");
			res=scanf("%d", &range[1]);
			if (res == 1)
			{
				if (range[0] >= range[1])
				{
					continue;
				}
				else
					break;
			}
			else
			{
				myflush();
				continue;
			}
		}
}

void myflush()


{
	while (getchar() != '\n')
		return;

}

void odd_even(int* range,char* ch)
{
	while (1)
	{
		myflush();
		printf("%d~%d까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요? : ",range[0],range[1]);
		scanf("%c", ch);

		if (ch[0] != 'e' && ch[0] != 'o')
			continue;
		else
			break;
	}
}

void output(int* range, char* ch) 
{
	int i,sum=0;
	if (ch[0] == 'e')
	{
		printf("%d~%d까지의 짝수(", range[0],range[1]);
		for (i = range[0]; i <= range[1]; i++)
		{
			if (i % 2 == 0)
			{
				printf("%d  ", i);
				sum += i;
			}
		}
		printf(")의 합은 %d입니다.", sum);
	}
	else if (ch[0] == 'o')
	{
		printf("%d~%d까지의 홀수(", range[0],range[1]);
		for (i = range[0]; i <= range[1]; i++)
		{
			if (i % 2 != 0)
			{
				printf("%d  ", i);
				sum += i;
			}
		}
		printf(")의 합은 %d입니다.", sum);
	}
}