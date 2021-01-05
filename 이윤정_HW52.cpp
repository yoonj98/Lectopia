#pragma warning (disable : 4996)
#include <stdio.h>

void input(int *ary, int *j);
void output(const char *msg, int *ary, int j);
void sort(int* ary, int j);

int main()
{
	int tc, i, j;
	int ary[100];
	freopen("c:\\data\\hw52_sortData.txt", "rt", stdin);
	scanf("%d", &tc);

	for (i = 0; i < tc; i++)
	{
		input(ary, &j);
		output("소트 전 데이터 : ", ary, j);

		sort(ary, j);

		output("소트 후 데이터 : ", ary, j);
		printf("\n");
	}

	return 0;
}

void input(int * ary, int *j)
{
	*j = 0;
	while (1)
	{
		scanf("%d", &ary[*j]);

		if (ary[*j] == 0)
		{

			break;
		}

		(*j)++;
	}

	return;
}

void output(const char *msg, int * ary, int j)
{
	int k;
	printf("%s", msg);
	for (k = 0; k < j; k++)
	{
		printf("%d ", ary[k]);
	}
	printf("\n");
	return;
}

void sort(int * ary, int j)
{
	int i, k, temp;
	for (i = 0; i < j - 1; i++)
	{
		for (k = i + 1; k < j; k++)
		{
			if (ary[i] > ary[k])
			{
				temp = ary[i];
				ary[i] = ary[k];
				ary[k] = temp;
			}
		}
	}
}