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
	printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d��° ���� ���߼̽��ϴ�.", flag);

	return 0;
}

int input()
{
	int num;
	while(1)
	{	printf("#���ڸ� �Է��Ͻÿ� : ");
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
			printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�\n", min, max);
			num = input();
			i++;
		}
		else if (randnum < num)
		{
			max = num;
			printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", min, max);
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