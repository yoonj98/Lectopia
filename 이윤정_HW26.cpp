#pragma warning (disable : 4996)
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

int input();
int output(int num, int randnum);
int random(int n);

int main()
{
	int num, randnum, i, win, same;
	srand((unsigned int)time(NULL));

	randnum = random(3);
	num = input();

	i = output(num, randnum);

	win = i / 10;
	same = i % 10;

	printf("���� ��� : %d�� %d��", win, same);
	return 0;
}

int input()
{
	int num;

	while (1)
	{
		printf("������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		scanf("%d", &num);

		if (getchar() == '\n')
		{
			if (num > 0 && num < 4)
			{
				return num;
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}
}

int random(int n)
{
	int res;
	res = (rand() % n) + 1;
	return res;
}

int output(int num, int randnum)
{
	int i = 0;

	while (1)
	{
		if (randnum == 1)
		{
			if (num == 1)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				i++;
				num=input();
				randnum = random(3);
				continue;
			}
			else if (num == 2)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				break;
			}
			else 
			{
				printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
				i += 10;
				num=input();
				randnum = random(3);
				continue;
			}
		}
		else if (randnum == 2)
		{
			if (num == 1)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
				i += 10;
				num=input();
				randnum = random(3);
				continue;
			}
			else if (num == 2)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				i++;
				num=input();
				randnum = random(3);
				continue;
			}
			else
			{
				printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				break;
			}
		}
		else
		{
			if (num == 1)
			{
				printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
				break;
			}
			else if (num == 2)
			{
				printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n");
				i += 10;
				num=input();
				randnum = random(3);
				continue;
			}
			else
			{
				printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
				i++;
				num=input();
				randnum = random(3);
				continue;
			}
		}
	}
	return i;
}