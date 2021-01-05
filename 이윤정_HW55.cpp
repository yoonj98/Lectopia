#pragma warning(disable : 4996)
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

void input(int (*)[4], int);
void output(int(*)[4], int);

int main()
{
	int num[3][4];
	int row;

	srand((unsigned int)time(NULL));

	row = sizeof(num) / sizeof(num[0]);
	input(num,row);
	output(num,row);
	
	return 0;
}

void input(int (*num)[4], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			num[i][j]= (rand() % 9) + 1;
		}
	}
}

void output(int (*num)[4], int row)
{
	int i, j;
	
	for (i = 0; i < row; i++)
	{
		int rowsum = 0;
		printf("%d행\t:", i);
		for (j = 0; j < 4; j++)
		{
			printf("%5d",num[i][j]);
			rowsum += num[i][j];
		}
		printf("\t%d행의 합 : %d\n",i,rowsum);
	}

	printf("열의 합\t:");
	for (i = 0; i < 4; i++)
	{
		int colsum = 0;
		for (j = 0; j < 3; j++)
		{
			colsum += num[j][i];
		}
		printf("%5d", colsum);
	}
}