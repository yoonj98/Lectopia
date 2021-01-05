#include <stdio.h>
#pragma warning (disable : 4996)

int transNumber(int num);
int inputUInt_F();
int inputUInt_L();
void result(int first, int last, int n);

int main()
{
	int n, first, last;

	first = inputUInt_F();
	last = inputUInt_L();

	while (first >= last)
	{
		first = inputUInt_F();
		last = inputUInt_L();
	}

	printf("고집수(N) : ");
	scanf("%d", &n);

	result(first, last, n);

	return 0;

}

int inputUInt_F()
{
	int first;

	printf("시작 값(P1): ");
	scanf("%d", &first);

	if (getchar() != '\n')
	{
		inputUInt_F();
	}
	else if (first < 0)
	{
		inputUInt_F();
	}
	else if (first < 100)
	{
		inputUInt_F();
	}
	else
	{
		return first;
	}
}

int inputUInt_L()
{
	int last;

	printf("끝 값(P2): ");
	scanf("%d", &last);

	if (getchar() != '\n')
	{
		inputUInt_L();
	}
	else if (last < 0)
	{
		inputUInt_L();
	}
	else if (last > 10000)
	{
		inputUInt_L();
	}
	else
	{
		return last;
	}
}

int transNumber(int num)
{
	int num_10000 = 1;
	int num_1000 = 1;
	int num_100 = 1;
	int num_10 = 1;
	int num_1 = 1;
	int res;

	if (num == 10000)
	{
		res = 0;
	}
	else if (1000 <= num && num < 10000)
	{
		num_1000 = num / 1000;
		num = num % 1000;

		num_100 = num / 100;
		num = num % 100;

		num_10 = num / 10;
		num = num % 10;
		num_1 = num;

		res = num_1000 * num_100*num_10*num_1;
	}
	else if (100 <= num)
	{
		num_100 = num / 100;
		num = num % 100;

		num_10 = num / 10;
		num = num % 10;
		num_1 = num;

		res = num_100 * num_10*num_1;
	}
	else if (10 <= num)
	{
		num_10 = num / 10;
		num = num % 10;
		num_1 = num;

		res = num_10 * num_1;
	}
	return res;
}

void result(int first, int last, int n)
{
	int num;
	int i ;
	int j = 0;

	printf("고집수가 %d인 숫자 출력\n", n);
	while (first < last + 1)
	{
		i = 0;
		num = first;
		while (num > 9)
		{
			num = transNumber(num);
			i++;
		}

		if (i == n)
		{
			printf("%d\n", first);
			j++;
		}
		else {
			;
		}
		first++;
	}
	printf("총 갯수 : %d개", j);
}