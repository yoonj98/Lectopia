#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>

int input(const char* msg);
int primeNumber(int number);
void myflush();

int main()
{
	int num, prinum, i, flag = 0;

	num = input("������ �ϳ��� �Է��Ͻÿ� : ");

	printf("1~%d������ �Ҽ� ���� ������ �����ϴ�.\n", num);
	for (i = 2; i <= num; i++)
	{
		prinum = primeNumber(i);
		if (prinum == 1)
		{
			flag++;
			printf("%d\t", i);
			if (flag % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("1~%d������ �� �Ҽ��� %d�� �Դϴ�.",num,flag);

	return 0;
}

int input(const char* msg)
{
	int num,res;

	while(1)
	{
		printf("%s", msg);
		res=scanf("%d", &num);

		if (getchar() == '\n')
		{
			if (res == 1)
				break;
			else
				continue;
		}
		else
			myflush();
			continue;
	}
	return num;
}

void myflush()
{
	while (getchar() != '\n')
		return;
}

int primeNumber(int number)
{
	int i,result=0;
	int sqrtnum;

	sqrtnum = sqrt(number);


	if (number % 2 == 0)
	{
		if (number == 2)
			return 1;
		else
			return 0;
	}
	else 
	{
		if (number == 3)
			return 1;
		else
		{
			for (i = 2; i <= sqrtnum; i++)
			{
				if (number%i == 0)//�Ҽ� �ƴ�
				{
					result+=1;
				}
				else//�Ҽ���
					result+=0;
			}
			if (result == 0)
				return 1;
			else
				return 0;
		}
	}
}