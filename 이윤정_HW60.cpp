#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* 주민등록번호 길이*/
int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char*resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main()
{
	/* 테스트할 주민등록번호 저장 배열*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
"8806311069417","8807311069418" };
	int i, count;
	/* 검사할 주민등록번호의 개수 계산*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i < count; i++) /* 주민등록번호 유효성 검사를 반복적으로 수행 함*/
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
		}
		else
		{
			printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
		}
	}
	return 0;
}
/*----------------------------------------------------------------
  availabilityCheck()함수: 주민등록번호 유효성 검사 함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 유효하면TRUE, 유효하지 않으면FALSE 리턴
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
  checkLengthCharacter()함수: 주민등록번호 길이 및 문자 유효성검사 함수
  전달인자: 검사할 주민등록번호(문자열)
  리턴값: 주민등록번호의 길이가 맞고 숫자문자로만 구성되어 있으면TRUE,
		   길이가 짧거나 길고, 숫자 문자가 아닌 문자가 섞여 있으면FALSE 리턴
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
  checkDate()함수: 첫6자리(연,월,일)의 유효성 검사 함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 유효한 날짜이면TRUE, 유효하지 않은 날짜이면FALSE 리턴
------------------------------------------------------------------*/
int checkDate(char *resident_number) //checkGender(),checkyeak() 사용
{
	int res,gender,i,j, count;
	int ary[6] = { 0, };
	int ary1[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int ary0[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	count = strlen(resident_number); //13

	for (i = 0; i < count; i++)
	{
		ary[0] = (resident_number[0] - '0') * 10 + resident_number[1] - '0';//연도
		ary[1] = (resident_number[2] - '0') * 10 + resident_number[3] - '0';//월
		ary[2] = (resident_number[4] - '0') * 10 + resident_number[5] - '0';//일
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

	if (res == 1)//윤년
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
	else//평년
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
  checkGender()함수: 7번째 자리의 성별식별번호 유효성 검사함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 성별식별번호가'1'~'4'이면TRUE, 그 외 숫자 문자이면FALSE 리턴
-----------------------------------------------------------------------*/
int checkGender(char *resident_number)
{
	if ((resident_number[6] - '0') > 0 && (resident_number[6] - '0') < 5)
		return TRUE;
	else
		return FALSE;
}
/*------------------------------------------------------------------------
  checkIdentification()함수: 주민등록번호 끝자리(인식자) 유효성 검사 함수
  전달인자: 유효성 검사할 주민등록번호(문자열)
  리턴값: 유효한 인식자이면TRUE, 유효하지 않은 인식자이면 FALSE 리턴
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
 checkYear ()함수: 년도의 윤,평년 여부 검사
  전달인자: 윤,평년 검사할 년도
  리턴값: 윤년이면 TRUE, 평년이면FALSE 리턴
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


