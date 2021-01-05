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

	code = input("사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");

	while (code < 1 | code > 3)
	{
		code = input("사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
	}

	use = input("사용량을 입력하시오(ton단위) : ");
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
		printf("# 사용자코드 : %d(가정용)\n# 사용량 : %d ton\n# 총수도요금 : %.lf원", code, use, money);
		break;
		
		case 2:
		printf("# 사용자코드 : %d(상업용)\n# 사용량 : %d ton\n# 총수도요금 : %.lf원", code, use, money);
		break;

		case 3:
		printf("# 사용자코드 : %d(공업용)\n# 사용량 : %d ton\n# 총수도요금 : %.lf원", code, use, money);
		break;

		default:
		break;
	}
}