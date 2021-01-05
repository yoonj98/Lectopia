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
			printf("%d�� %d�� %d���� �Ͽ����Դϴ�.\n", ary[0], ary[1], ary[2]);
			break;

		case 1:
			printf("%d�� %d�� %d���� �������Դϴ�.\n", ary[0], ary[1], ary[2]);
			break;

		case 2:
			printf("%d�� %d�� %d���� ȭ�����Դϴ�.\n", ary[0], ary[1], ary[2]);
			break;

		case 3:
			printf("%d�� %d�� %d���� �������Դϴ�.\n", ary[0], ary[1], ary[2]);
			break;

		case 4:
			printf("%d�� %d�� %d���� ������Դϴ�.\n", ary[0], ary[1], ary[2]);
			break;

		case 5:
			printf("%d�� %d�� %d���� �ݿ����Դϴ�.\n", ary[0], ary[1], ary[2]);
			break;

		case 6:
			printf("%d�� %d�� %d���� ������Դϴ�.\n", ary[0], ary[1], ary[2]);
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
		printf("�� �� ���� �Է��Ͻÿ� : ");
		res=scanf("%d%d%d", &ary[0], &ary[1],&ary[2]);
		if (res == 3) //���� �Է�
		{
			if (dayerror(ary) == 1) //error
			{
				continue;
			}
			else //�����Է�
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
	if (res == 1)//����
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
	else//���
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
	int sum_1 = 0; //����
	int sum_0 = 0; //���
	int ary1[] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; //����
	int ary0[] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //���

	for (i = 1900; i < ary[0]; i++) //�Է³⵵ ���⵵���� ��
	{
		res = yearCheck(i);
		if (res == 1) //����
			sum_1+=366;
		else if(res==0)
			sum_0+=365;
	}

	now = ary[0]; //�Է³⵵

	if (yearCheck(now)==1) //����
	{
		for (i = 0; i < ary[1]-1; i++)//��
		{
			sum_1 += ary1[i];
		}
		for (i = 0; i < ary[2]; i++)//��
		{
			sum_1++;
		}
	}
	else//���
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