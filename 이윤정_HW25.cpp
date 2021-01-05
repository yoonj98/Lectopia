#pragma warning(disable : 4996)
#include <stdlib.h>
#include <time.h>
#include<stdio.h>
int random(int);
int input();
int output(int num,int randnum);

int main()
{
	int num,randnum,flag;
	
	srand((unsigned int)time(NULL));

	randnum = random(100);
	num = input();
	flag=output(num,randnum);
	printf("우와~ 맞았당~~~ 추카추카~~ %d번째 만에 맞추셨습니다.", flag);

	return 0;
}

int input()
{
	int num;
	while(1)
	{	printf("#숫자를 입력하시오 : ");
		scanf("%d", &num);

		if (getchar() == '\n')
		{
			if (1<=num && num <= 100)
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

int output(int num, int randnum)
{
	int max = 101;
	int min = 0;
	int i = 0;
	
	while (randnum != num)
	{
		if (randnum > num)
		{
			min = num;
			printf("%d보다는 크고 %d보다는 작습니다\n", min, max);
			num = input();
			i++;
		}
		else if (randnum < num)
		{
			max = num;
			printf("%d보다는 크고 %d보다는 작습니다.\n", min, max);
			num = input();
			i++;
		}
	}
	return i;
}
int random(int n)
{
	int res;
	res = (rand() % n)+1;
	return res;
}