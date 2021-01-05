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
		printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� %d�� ��ġ�� �����մϴ�.\n", str, ch, result);
	}
	else
	{
		printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� �������� �ʽ��ϴ�.\n", str, ch);
	}

	return 0;

}

void input(char(*str), char *ch)
{
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	myflush();

	printf("���ڸ� �Է��ϼ��� : ");
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