#pragma warning (disable : 4996)
#include <stdio.h>

int input();

int main()
{
	int weight;
	int egg = 0;

	while (egg != 10)
	{
		weight = input();
		if (weight >= 150 && weight <= 500)
		{
			egg++;
			printf("���� �ް��� �� : %d\n", egg);
			continue;
		}
		else if(0<weight && weight<150)
		{
			printf("���߸��� ������ �峭���� ���ÿ�~ ^^\n");
			continue;
		}
		else if(500<weight)
		{
			printf("Ÿ���� ������ �峭���� ���ÿ�~^^\n");
			continue;
		}
		else
		{
			continue;
		}
	}
	printf("�ް� ������ �������ϴ�");;
	return 0;
}

int input()
{
	int num;
	printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
	scanf("%d", &num);

	if (getchar() == '\n')
	{
		return num;
	}
	else
	{
		input();
	}
}