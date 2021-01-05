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

	printf("게임 결과 : %d승 %d무", win, same);
	return 0;
}

int input()
{
	int num;

	while (1)
	{
		printf("바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
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
				printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n");
				i++;
				num=input();
				randnum = random(3);
				continue;
			}
			else if (num == 2)
			{
				printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 졌습니다.\n");
				break;
			}
			else 
			{
				printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n");
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
				printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n");
				i += 10;
				num=input();
				randnum = random(3);
				continue;
			}
			else if (num == 2)
			{
				printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n");
				i++;
				num=input();
				randnum = random(3);
				continue;
			}
			else
			{
				printf("당신은 보 선택, 컴퓨터는 가위 선택 : 졌습니다.\n");
				break;
			}
		}
		else
		{
			if (num == 1)
			{
				printf("당신은 바위 선택, 컴퓨터는 보 선택 : 졌습니다.\n");
				break;
			}
			else if (num == 2)
			{
				printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n");
				i += 10;
				num=input();
				randnum = random(3);
				continue;
			}
			else
			{
				printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다.\n");
				i++;
				num=input();
				randnum = random(3);
				continue;
			}
		}
	}
	return i;
}