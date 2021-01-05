#pragma warning (disable : 4996)
#include<stdio.h>

int fibonacci(int num);
void myflush();

int main()
{
	int num=0;
	int i;
	long long sum = 0;
	char ary[3] = { '+','='};

	while (1 > num || num > 30)
	{
		printf("피보나치 수열의 항수를 입력하세요(1<=N<=30) : ");
		scanf("%d", &num);
		myflush();
	}
	
	for (i = 1; i <= num; i++)
	{
		printf("%4d", fibonacci(i));
		sum += (long long)fibonacci(i);
		if (i < num)
		{
			printf("%4c",ary[0]);
		}
		else
		{
			printf("%4c",ary[1]);
		}
	}
	printf("%4lld", sum);

	return 0;
}

int fibonacci(int num)
{
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return fibonacci(num - 2) + fibonacci(num - 1);
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}