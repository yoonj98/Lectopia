#pragma warning (disable : 4996)
#include <stdio.h>

int age_input();
int num_input();
int output(int age,int num);

int main()
{
	int age, num;
	age = age_input();
	num = num_input();
	output(age,num);

	return 0;
}

int age_input()
{
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}

int num_input()
{
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}

int output(int age, int num)
{
	if (num < 5)
	{
		if (age <= 7)
		{
			return printf("����� : %d��\n���αݾ� : 0��\n�����ݾ� : %d��\n", 500 * num, 500 * num);
		}
		else if (age <= 13)
		{
			return printf("����� : %d��\n���αݾ� : 0��\n�����ݾ� : %d��\n", 700 * num, 700 * num);
		
		}
		else if (age <= 19)
		{
			return printf("����� : %d��\n���αݾ� : 0��\n�����ݾ� : %d��\n", 1000 * num, 1000 * num);
		
		}
		else if (age <= 55)
		{
			return printf("����� : %d��\n���αݾ� : 0��\n�����ݾ� : %d��\n", 1500 * num, 1500 * num);

		}
		else 
		{
			return printf("����� : %d��\n���αݾ� : 0��\n�����ݾ� : %d��\n", 500 * num, 500 * num);
			
		}
	}
	else
	{
		if (age <= 7)
		{
			return printf("����� : %d��\n���αݾ� : %d��\n�����ݾ� : %d��\n", 500 * num, 50 * num, 450 * num);
			
		}
		else if (age <= 13)
		{
			return printf("����� : %d��\n���αݾ� : %d��\n�����ݾ� : %d��\n", 700 * num,70 * num, 630 * num);
			
		}
		else if (age <= 19)
		{
			return printf("����� : %d��\n���αݾ� : %d��\n�����ݾ� : %d��\n", 1000 * num, 100 * num, 900 * num);

		}
		else if (age <= 55)
		{
			return printf("����� : %d��\n���αݾ� : %d��\n�����ݾ� : %d��\n", 1500 * num, 150 * num, 1350 * num);

		}
		else
		{
			return printf("����� : %d��\n���αݾ� : %d��\n�����ݾ� : %d��\n", 500 * num, 50 * num, 450 * num);
		}
	}
}