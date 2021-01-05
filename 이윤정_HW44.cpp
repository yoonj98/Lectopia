#pragma warning (disable : 4996)
#include <stdio.h>

void input(int*);
void myflush();
void odd_even(int*,char* ch);
void output(int*, char* ch);

int main()
{
	int  range[2];
	char ch[2];

	input(range);
	odd_even(range,ch);
	output(range, ch);

	return 0;
}

void input(int *range)
{
	int res;

		while (1)
		{
			printf("���� ���� �Է��ϼ��� : ");
			res = scanf("%d", &range[0]);
			if (res == 1)
			{
				if (range[0] < 0)
				{
					continue;
				}
				else
					break;
			}
			else
			{
				myflush();
				continue;
			}
		}

		while (1)
		{
			printf("������ �Է��ϼ��� : ");
			res=scanf("%d", &range[1]);
			if (res == 1)
			{
				if (range[0] >= range[1])
				{
					continue;
				}
				else
					break;
			}
			else
			{
				myflush();
				continue;
			}
		}
}

void myflush()


{
	while (getchar() != '\n')
		return;

}

void odd_even(int* range,char* ch)
{
	while (1)
	{
		myflush();
		printf("%d~%d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��? : ",range[0],range[1]);
		scanf("%c", ch);

		if (ch[0] != 'e' && ch[0] != 'o')
			continue;
		else
			break;
	}
}

void output(int* range, char* ch) 
{
	int i,sum=0;
	if (ch[0] == 'e')
	{
		printf("%d~%d������ ¦��(", range[0],range[1]);
		for (i = range[0]; i <= range[1]; i++)
		{
			if (i % 2 == 0)
			{
				printf("%d  ", i);
				sum += i;
			}
		}
		printf(")�� ���� %d�Դϴ�.", sum);
	}
	else if (ch[0] == 'o')
	{
		printf("%d~%d������ Ȧ��(", range[0],range[1]);
		for (i = range[0]; i <= range[1]; i++)
		{
			if (i % 2 != 0)
			{
				printf("%d  ", i);
				sum += i;
			}
		}
		printf(")�� ���� %d�Դϴ�.", sum);
	}
}