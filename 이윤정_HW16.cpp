#pragma warning (disable : 4996)
#include <stdio.h>

int input();
int calculate(int num);
int output(int money);

int main()
{
	int num,money,i=0;

	while (i< 5) {
		num = input();
		money = calculate(num);
		output(money);
		i++;
	}
	return 0;
}

int input()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	
	return num;
}

int calculate(int num)
{
	if (num <= 5)
	{
		return 600;
	}
	else if (num <= 10)
	{
		return 800;
	}
	else 
	{
		if (num % 2 == 0)
		{
			return (num - 10) * 100 / 2 + 800;
		}
		else
		{
			return (num - 9) * 100 / 2 + 800;
		}
	}
}
int output(int money)
{
	return printf("��� : %d��\n", money);
}