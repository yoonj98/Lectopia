#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

void input(char(*)[20]);
void sort(char(*)[20]);
void output(char(*)[20]);

int main()
{
	char str[5][20];

	input(str);
	sort(str);
	output(str);

	return 0;
}

void input(char(*str)[20])
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d번 문자열을 입력하시오 : ", i+1);
		scanf("%s", &str[i]);
	}

	return;
}

void sort(char(*str)[20])
{
	int i, j, n;
	char ary[20] = { 0, };

	n = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = i; j < 5; j++)
		{
			n = strcmp(str[i], str[j]);
			if (n != -1)
			{
				strcpy(ary, str[j]);
				strcpy(str[j], str[i]);
				strcpy(str[i], ary);
			}
		}
	}
	return;
}

void output(char(*str)[20])
{
	unsigned int len;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		len = strlen(str[i]);
		printf("str[%d] = %s  %c  %c\n", i, str[i], str[i][0], str[i][len - 1]);

	}
	return;
}