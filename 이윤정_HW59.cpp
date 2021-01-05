#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void inputary(int* ary, int num);
int checkary(int* ary, int num);
void output(int result);

int main()
{
	int num, result, res;
	int *ary;

	while (1)
	{
		printf("�Է��� ������ ���� : ");
		res = scanf("%d", &num);
		if (res != 1)
			break;
		ary = (int*)malloc(sizeof(int)*num);
		inputary(ary, num);
		result = checkary(ary, num);
		output(result);
	}

	free(ary);
	return 0;
}

void inputary(int* ary, int num)
{
	int i;
	printf("���� �Է� : ");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &ary[i]);
	}

	return;
}

int checkary(int* ary, int num)
{
	int i, j,count=0;
	int *flag;
	flag= (int*)calloc(num,sizeof(int));

	for (i = 0; i < num; i++)
	{
		for (j = i+1; j < num; j++)
		{
			if (ary[i] == ary[j])
			{
				flag[i]++;
			}
		}
	}
	for (i = 0; i < num; i++)
	{
		if (flag[i] == 0)
		{
			count++;
		}
	}
	return count;
}

void output(int result)
{
	printf("���� �ٸ� ���� ���� : %d\n", result);
	printf("\n");
}