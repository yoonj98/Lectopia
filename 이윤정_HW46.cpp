#pragma warning (disable : 4996)
#include <stdio.h>

int yearCheck(int num);
int input(int *ary);
int dayerror(int *ary);
int daycal(int * ary);

int main()
{
	int ary[3];
	int allday,date,flag;

	while (1)
	{
		flag=input(ary);
		if (flag == 1)
			break;
		allday = daycal(ary);
		date = allday % 7;

		switch (date)
		{
		case 0:
			printf("%d년 %d월 %d일은 일요일입니다.\n", ary[0], ary[1], ary[2]);
			break;

		case 1:
			printf("%d년 %d월 %d일은 월요일입니다.\n", ary[0], ary[1], ary[2]);
			break;

		case 2:
			printf("%d년 %d월 %d일은 화요일입니다.\n", ary[0], ary[1], ary[2]);
			break;

		case 3:
			printf("%d년 %d월 %d일은 수요일입니다.\n", ary[0], ary[1], ary[2]);
			break;

		case 4:
			printf("%d년 %d월 %d일은 목요일입니다.\n", ary[0], ary[1], ary[2]);
			break;

		case 5:
			printf("%d년 %d월 %d일은 금요일입니다.\n", ary[0], ary[1], ary[2]);
			break;

		case 6:
			printf("%d년 %d월 %d일은 토요일입니다.\n", ary[0], ary[1], ary[2]);
			break;

		default:
			break;
		}

	}

	return 0;
}

int input(int *ary)
{
	int res;
	while (1)
	{
		printf("년 월 일을 입력하시오 : ");
		res=scanf("%d%d%d", &ary[0], &ary[1],&ary[2]);
		if (res == 3) //정상 입력
		{
			if (dayerror(ary) == 1) //error
			{
				continue;
			}
			else //정상입력
				break;
		}
		else //error
		{
			if (getchar() != '\n')
				return 1;
			else
				continue;
		}
	}
	return 0;
}

int yearCheck(int num)
{
		if (num % 4 == 0)
		{
			if (num % 100 == 0)
			{
				if (num % 400 == 0)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
}

int dayerror(int *ary)
{
	int res,i,now;
	int ary1[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int ary0[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	now = ary[0];
	res = yearCheck(now);
	if (res == 1)//윤년
	{
		if (ary[1] > 0 && ary[1] < 13)
		{
			i = ary[1] - 1;
			if (ary[2] <= ary1[i] && ary[2] > 0)
			{
				return 0;
			}
			else
				return 1; //error
		}
		else
			return 1;
	}
	else//평년
	{
		if (ary[1] > 0 && ary[1] < 13)
		{
			i = ary[1] - 1;
			if (ary[2] <= ary0[i] && ary[2] > 0)
			{
				return 0;
			}
			else
				return 1; //error
		}
		else
			return 1;
	}
}

int daycal(int* ary)
{
	int i, res, now;
	int sum_1 = 0; //윤년
	int sum_0 = 0; //평년
	int ary1[] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; //윤년
	int ary0[] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //평년

	for (i = 1900; i < ary[0]; i++) //입력년도 전년도까지 합
	{
		res = yearCheck(i);
		if (res == 1) //윤년
			sum_1+=366;
		else if(res==0)
			sum_0+=365;
	}

	now = ary[0]; //입력년도

	if (yearCheck(now)==1) //윤년
	{
		for (i = 0; i < ary[1]-1; i++)//월
		{
			sum_1 += ary1[i];
		}
		for (i = 0; i < ary[2]; i++)//일
		{
			sum_1++;
		}
	}
	else//평년
	{
		for (i = 0; i < ary[1] - 1; i++)
		{
			sum_0 += ary0[i];
		}
		for (i = 0; i < ary[2]; i++)
		{
			sum_0++;
		}
	}
	return sum_0 + sum_1;
}