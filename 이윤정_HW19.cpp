#pragma warning (disable : 4996)
#include <stdio.h>

int input();
int yearCheck(int num);

int main()
{
	int num,year;

	num = input();
	year = yearCheck(num);

	if (year == 1)
	{
		printf("%d���� ����(Leap Year)�Դϴ�.", num);
	}
	else if (year == 0)
	{
		printf("%d���� ���(Common Year)�Դϴ�.", num);
	}

	return 0;
}

int input()
{
	int num;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &num);
	return num;
}

int yearCheck(int num)
{
	if (num % 4 == 0)
	{
		if (num % 100 == 0)
		{
			if (num % 400 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}

}