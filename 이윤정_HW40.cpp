#include <stdio.h>

int main()
{
	int i, j, num;

	while (1)
	{
		printf("��� ���� ���� �Է��Ͻÿ� : ");
		i=scanf("%d", &num);
		if (getchar() != '\n')
		{
			break;
		}
		else if (i != 1)
		{
			break;
		}

		for (i = 1; i <= num; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf("*");
			}
			for (j = 2*num; j >= 2*i; j--)
			{
				printf(" ");
			}
			for (j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

	}



	return 0;
}