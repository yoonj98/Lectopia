#pragma warning (disable : 4996)
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void aryreset(int(*p)[5]);
int sum(int num, int(*p)[5]);
void output(int,int,int,int(*p)[5]);

int main()
{
	int ary[5][5],sum1,sum2,sum3;
	srand((unsigned int)time(NULL));

	aryreset(ary);
	sum1 = sum(1, ary);
	sum2 = sum(2, ary);
	sum3 = sum(3, ary);

	output(sum1, sum2, sum3, ary);

	return 0;
}

void aryreset(int(*ary)[5])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			ary[i][j]= (rand() % 20) + 1;
		}
	}
}

int sum(int num, int(*ary)[5])
{
	int i, j,sum=0;

	switch (num)
	{
	case 1:
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (i == j)
				{
					sum += ary[i][j];
				}
			}
		}
		return sum;
		break;

	case 2:
		for (i = 0; i < 4; i++)
		{
			for (j = 1; j < 5; j++)
			{
				if (i < j)
				{
					sum += ary[i][j];
				}
			}
		}
		return sum;
		break;

	case 3:
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < i; j++)
			{
				sum += ary[i][j];
			}
		}
		return sum;
		break;
	default:
		break;
	}
}

void output(int sum1, int sum2, int sum3, int(*ary)[5])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		printf("%d¹ø Çà :", i);
		for (j = 0; j < 5; j++)
		{
			printf("%3d", ary[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	printf("sum3 = %d", sum3);

}