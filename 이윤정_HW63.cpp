#include <stdio.h>
#pragma warning (disable : 4996)
#include <stdlib.h>

int main()
{
	int i,j,k,num,*ary,*jolly;
	int flag;

	flag = 0;
	scanf("%d", &num);
	
	ary = (int*)malloc(sizeof(int)*num);
	jolly = (int*)calloc(sizeof(int), num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &ary[i]);
	}

	for (i = 0; i < num-1; i++)
	{
		for (j = i + 1; j < i+2; j++)
		{
			for (k = num-1; k > 0; k--)
			{
				if ((ary[i] - ary[j]) == k || (ary[j] - ary[i]) == k)
				{
					jolly[k]++;
				}
			}
		}
	}

	for (i = 0; i < num; i++)
	{
		if (jolly[i] == 1)
		{
			flag++;
		}
	}

	if (flag == (num - 1))
	{
		printf("검사한 수열 :");
		for (i = 0; i < num; i++)
		{
			printf("%-4d", ary[i]);
		}
		printf("(Jolly jumper)");
	}
	else
	{
		printf("검사한 수열 :");
		for (i = 0; i < num; i++)
		{
			printf("%-4d", ary[i]);
		}
		printf("(Not jolly jumper)");
	}

	free(ary);
	free(jolly);

	return 0;
}