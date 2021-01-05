#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

void input(char* str);
int numcheck(char* str);
void output(char* str, int sum);

int main()
{
	char str[100] = { 0, };
	int sum;

	while (1)
	{
		input(str);
		if (strcmp(str, "end") == 0)
			break;
		sum = numcheck(str);
		output(str, sum);
	}


	return 0;
}

void input(char* str)
{
	printf("문장을 입력하시오 : ");
	scanf("%s", str);

	return;
}

int numcheck(char* str)
{
	int i,k, sum = 0,dnum;
	unsigned int len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ((int)str[i] > 47 && (int)str[i] < 58) //숫자 판별 
		{
			dnum = 1;
			k = i;
			while (k < len)
			{
				k++;
				if ((int)str[k] > 47 && (int)str[k] < 58) //다음 배열에 숫자가 오는 지 판별
				{
					dnum *= 10; //연속된 숫자라면 각기 다른 숫자가 아닌 하나의 수로 받음
				}
				else
					break;
			}
			sum += dnum * (str[i] - '0');
		}
	}
	return sum;
}

void output(char* str, int sum)
{
	printf("\"%s\" 내의 총 숫자는 [%d]입니다.\n", str, sum);
}