#include <stdio.h>

int main()
{
	int num1, num2;
	int max,min;

	while (1)
	{
		printf("#�ΰ��� ������ �Է��ϼ��� : ");
		scanf("%d %d", &num1, &num2);

		if (getchar() == '\n')
		{
			if (num1 > num2)
			{
				max = num1;
				min = num2;
			}
			else
			{
				max = num2;
				min = num1;
			}

			printf("%d - %d = %d\n", max, min, max - min);
		}
		else
		{
			break;
		}
	}
	return 0;
}