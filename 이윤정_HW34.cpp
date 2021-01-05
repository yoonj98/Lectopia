#pragma warning (disable : 4996)
#include <stdio.h>

int input(const char *msg);
void myflush();
double calculate(int,int);
void output(int,int,double);

int main()
{
	int code, use;
	double money;

	code = input("����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");

	while (code < 1 | code > 3)
	{
		code = input("����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
	}

	use = input("��뷮�� �Է��Ͻÿ�(ton����) : ");
	money = calculate(code, use);
	output(code, use, money);

	return 0;
}

int input(const char *msg)
{
	int n;
	while (1)
	{
		printf("%s", msg);
		scanf("%d", &n);
		if (getchar() == '\n')
		{
			break;
		}
		myflush();
	}
	return n;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

double calculate(int code, int use)
{
	double money;
	switch (code)
	{
	case 1:
		money = (double)50 * use*1.05;
		break;
	case 2:
		money = (double)40 * use*1.05;
		break;
	case 3:
		money = (double)30 * use*1.05;
		break;
	default:
		break;
	}
	return money;
}

void output(int code, int use, double money)
{
	printf("\n");
	switch (code) 
	{
		case 1:
		printf("# ������ڵ� : %d(������)\n# ��뷮 : %d ton\n# �Ѽ������ : %.lf��", code, use, money);
		break;
		
		case 2:
		printf("# ������ڵ� : %d(�����)\n# ��뷮 : %d ton\n# �Ѽ������ : %.lf��", code, use, money);
		break;

		case 3:
		printf("# ������ڵ� : %d(������)\n# ��뷮 : %d ton\n# �Ѽ������ : %.lf��", code, use, money);
		break;

		default:
		break;
	}
}