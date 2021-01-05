#include <stdio.h>
#pragma warning (disable : 4996)

void input(double *);
double max(double *, int);
double min(double *, int);
void output(double, double);

int main()
{
	double Max_num, Min_num;
	double num[5];
	int size;
	
	size=sizeof(num) / sizeof(num[0]);
	input(num);
	Max_num = max(num, size);
	Min_num = min(num, size);

	output(Max_num, Min_num);

	return 0;

}
void input(double *num)
{
	int i;
	int res;
	for (i = 0; i < 5; i++)
	{
		while (1)
		{
			printf("%d번 방 값 : ", i);
			res = scanf("%lf", &num[i]);
			if (getchar() == '\n')
			{
				if (res == 1)
				{
					break;
				}
				else
				{
					printf("다시 입력해주세요.\n");
				}
			}
			else
			{
				printf("다시 입력해주세요.\n");
				while (getchar() != '\n')
				{
					;
				}
			}
		}

	}

	return;
}

double max(double *num, int size)
{
	int i;
	double temp;

	for (i = 0; i < size - 1; i++)
	{
		if (i == 0)
		{
			temp = num[i];
		}
		else
		{
			if (temp < num[i])
			{
				temp = num[i];
			}
		}
	}

	return temp;

}

double min(double *num, int size)
{
	int i;
	double temp;

	for (i = 0; i < size - 1; i++)
	{
		if (i == 0)
		{
			temp = num[i];
		}
		else
		{
			if (temp > num[i])
			{
				temp = num[i];
			}
		}
	}

	return temp;

}

void output(double Max_num, double Min_num)
{
	printf("\n가장 큰 값 : %.2lf \n가장 작은 값 : %.2lf ", Max_num, Min_num);

	return;
}