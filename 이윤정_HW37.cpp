#include <stdio.h>

int main()
{
	int i;
	char ary[3] = { '*','#' };

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("%5d", i);
				if (i % 10 == 0)
				{
					printf("\n");
				}
			}
			else
			{
				printf("%5c",ary[0]);
			}
		}
		else if (i % 5 == 0)
		{
			printf("%5c",ary[1]);
			if (i % 10 == 0)
			{
				printf("\n");
			}
		}
		else
		{
			printf("%5d", i);
			if (i % 10 == 0)
			{
				printf("\n");
			}
		}
	}
}