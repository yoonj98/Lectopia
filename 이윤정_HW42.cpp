#include <stdio.h>

int main()
{
	int i, j, k;

	printf("<2중 for문을 이용한 출력>\n");
	for (i = 1; i < 10; i++)
	{
		for (j = 2; j < 6; j++)
		{
			printf("%d * %d = %d\t", j, i, j*i);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i < 10; i++)
	{
		for (j = 6; j < 10; j++)
		{
			printf("%d * %d = %d\t", j, i, j*i);
		}
		printf("\n");
	}

	printf("\n");
	printf("<3중 for문을 이용한 출력>\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			for (int k = i + 2; k < 10; k += 2)
			{
				printf("%d * %d = %d\t", k, j,k*j);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}