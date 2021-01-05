#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void input(char *str);
int palcheck(char* str);
void output(char* str, int result);

int main()
{
	char str[100] = { 0, };
	int result = 0;

	while (1)
	{
		input(str);
		if (strcmp(str, "end") == 0)
			break;
		result = palcheck(str);
		output(str, result);
	}

	return 0;
}

void input(char* str)
{
	int i;
	unsigned int len;

	len = strlen(str);

	printf("단어 입력 : ");
	scanf("%s", str);

	return;
}

int palcheck(char* str)
{
	int i, flag = 0;
	unsigned int len;

	len = strlen(str);

	for (i = 0; i < len / 2; i++)
	{
		if (toupper(str[i]) == toupper(str[len -1 - i]))
		{
			flag++;
		}
		else
			;
	}
	if (flag == len / 2)
	{
		return 1;
	}
	else
		return 0;
}

void output(char* str, int result)
{
	if (result == 1)
	{
		printf("\"%s\" : 회문입니다!\n", str);
	}
	else
	{
		printf("\"%s\" : 회문이 아닙니다!\n", str);
	}
}