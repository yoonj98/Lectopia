#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

void input(char*, char*);
void myflush();
int strcheck(char *, char);

int main()
{
	char str[100];
	char ch;
	int result;

	input(str, &ch);
	result = strcheck(str, ch);

	if (result >= 0)
	{
		printf("\"%s\"문자열 안에 '%c'문자는 %d번 위치에 존재합니다.\n", str, ch, result);
	}
	else
	{
		printf("\"%s\"문자열 안에 '%c'문자는 존재하지 않습니다.\n", str, ch);
	}

	return 0;

}

void input(char(*str), char *ch)
{
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	myflush();

	printf("문자를 입력하세요 : ");
	scanf("%c", ch);

	return;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

int strcheck(char *str, char ch)
{
	unsigned int i, len;
	int flag = -1;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ch)
		{
			flag = i;
			break;
		}
	}
	return flag;
}