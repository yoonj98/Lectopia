#pragma warning (disable : 4996)
#include <stdio.h>

void myflush();
void goldcal(int num);

int main()
{
	int num=0;

	while (1 > num || num > 200)
	{
		printf("����� �ٹ��ϼ��� �Է��Ͻÿ� :");
		scanf("%d", &num);
		myflush();
	}

	goldcal(num);

	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

void goldcal(int num)
{
	int i, j,flag=0;
	int sum = 0;

	for (i = 1;; i++)
	{
		for (j = 0; j < i; j++)
		{
			sum += i;
			flag++;
			if (flag == num)
			{
				break;
			}
		}
		if (flag == num)
		{
			break;
		}
	}
	printf("�ٹ��� : %d�� / �� ��ȭ �� : %d��", num, sum);
}