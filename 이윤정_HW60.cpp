#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* �ֹε�Ϲ�ȣ ����*/
int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char*resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main()
{
	/* �׽�Ʈ�� �ֹε�Ϲ�ȣ ���� �迭*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
"8806311069417","8807311069418" };
	int i, count;
	/* �˻��� �ֹε�Ϲ�ȣ�� ���� ���*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i < count; i++) /* �ֹε�Ϲ�ȣ ��ȿ�� �˻縦 �ݺ������� ���� ��*/
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) �ֹι�ȣ%s��(��) ��ȿ�� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
		else
		{
			printf("(-) �ֹι�ȣ%s��(��) ��ȿ���� ���� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
	}
	return 0;
}
/*----------------------------------------------------------------
  availabilityCheck()�Լ�: �ֹε�Ϲ�ȣ ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�ϸ�TRUE, ��ȿ���� ������FALSE ����
------------------------------------------------------------------*/
int availabilityCheck(char *resident_number)
{
	if (checkLengthCharacter(resident_number) == TRUE)
	{
		if (checkDate(resident_number) == TRUE)
		{
			if (checkIdentification(resident_number) == TRUE)
			{
				return TRUE;
			}
			else
				return FALSE;
		}
		else
			return FALSE;
	}
	else
		return FALSE;
}
/*-------------------------------------------------------------------------
  checkLengthCharacter()�Լ�: �ֹε�Ϲ�ȣ ���� �� ���� ��ȿ���˻� �Լ�
  ��������: �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �ֹε�Ϲ�ȣ�� ���̰� �°� ���ڹ��ڷθ� �����Ǿ� ������TRUE,
		   ���̰� ª�ų� ���, ���� ���ڰ� �ƴ� ���ڰ� ���� ������FALSE ����
--------------------------------------------------------------------------*/
int checkLengthCharacter(char *resident_number)
{
	int i,flag;
	int count;

	count = strlen(resident_number);
	flag = 0;

	if (count == 13)
	{
		for (i = 0; i < 13; i++)
		{
			if ((int)resident_number[i] > 47 && (int)resident_number[i] < 58)
			{
				flag++;
			}
			else
				return FALSE;
		}
		if (flag == 13)
		{
			return  TRUE;
		}
	}
	else
		return FALSE;
}
/*----------------------------------------------------------------
  checkDate()�Լ�: ù6�ڸ�(��,��,��)�� ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� ��¥�̸�TRUE, ��ȿ���� ���� ��¥�̸�FALSE ����
------------------------------------------------------------------*/
int checkDate(char *resident_number) //checkGender(),checkyeak() ���
{
	int res,gender,i,j, count;
	int ary[6] = { 0, };
	int ary1[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int ary0[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	count = strlen(resident_number); //13

	for (i = 0; i < count; i++)
	{
		ary[0] = (resident_number[0] - '0') * 10 + resident_number[1] - '0';//����
		ary[1] = (resident_number[2] - '0') * 10 + resident_number[3] - '0';//��
		ary[2] = (resident_number[4] - '0') * 10 + resident_number[5] - '0';//��
	}

	for (i = 0; i < count; i++)
	{
		if (checkGender(resident_number) == TRUE)
		{
			if (resident_number[6] == 1 || resident_number[6] == 2)
			{
				ary[0] += 1900;
			}
			else
				ary[0] += 2000;
		}
		else
			return FALSE;
	}

	res = checkYear(ary[0]);

	if (res == 1)//����
	{
		if (ary[1] > 0 && ary[1] < 13)
		{
			i = ary[1] - 1;
			if (ary[2] <= ary1[i] && ary[2] > 0)
			{
				return TRUE;
			}
			else
				return FALSE; //error
		}
		else
			return FALSE;
	}
	else//���
	{
		if (ary[1] > 0 && ary[1] < 13)
		{
			i = ary[1] - 1;
			if (ary[2] <= ary0[i] && ary[2] > 0)
			{
				return TRUE;
			}
			else
				return FALSE; //error
		}
		else
			return FALSE;
	}
}
/*----------------------------------------------------------------------
  checkGender()�Լ�: 7��° �ڸ��� �����ĺ���ȣ ��ȿ�� �˻��Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �����ĺ���ȣ��'1'~'4'�̸�TRUE, �� �� ���� �����̸�FALSE ����
-----------------------------------------------------------------------*/
int checkGender(char *resident_number)
{
	if ((resident_number[6] - '0') > 0 && (resident_number[6] - '0') < 5)
		return TRUE;
	else
		return FALSE;
}
/*------------------------------------------------------------------------
  checkIdentification()�Լ�: �ֹε�Ϲ�ȣ ���ڸ�(�ν���) ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� �ν����̸�TRUE, ��ȿ���� ���� �ν����̸� FALSE ����
-------------------------------------------------------------------------*/
int checkIdentification(char *resident_number)
{
	int i,count, sum=0;

	count = strlen(resident_number);

	for (i = 0; i < count-1; i++)
	{
		sum += (resident_number[i]-'0');
	}

	if ((sum % 10) == (resident_number[12]-'0'))
	{
		return TRUE;
	}
	else
		return FALSE;
}
/*----------------------------------------------------------------
 checkYear ()�Լ�: �⵵�� ��,��� ���� �˻�
  ��������: ��,��� �˻��� �⵵
  ���ϰ�: �����̸� TRUE, ����̸�FALSE ����
------------------------------------------------------------------*/
int checkYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else
		{
			return TRUE;
		}
	}
	else
	{
		return FALSE;
	}
}


