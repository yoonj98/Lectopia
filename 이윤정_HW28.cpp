#include <stdio.h>

int main()
{
	char ch;
	int alpa=0, num=0, space=0, etc=0;

	printf("���� ������ �Է� �Ͻÿ� : \n");
	scanf("%d", &ch);

	while ((ch = getchar()) != EOF)
	{
		if (65 <= (int)ch && (int)ch <= 90 || 97 <=(int)ch && (int)ch <= 122)
		{
			alpa++;
		}
		else if (48 <= ch && ch <= 57)
		{
			num++;
		}
		else if (ch == 32 || ch == 9 || ch == '\n')
		{
			space++;
		}
		else
		{
			etc++;
		}
	}
	printf("������ ��ҹ��� ���� : %d��\n", alpa);
	printf("���ڹ��� ���� : %d��\n", num);
	printf("���鹮�� ���� : %d��\n", space);
	printf("�� �� ��Ÿ ���� ���� : %d��\n", etc);

	return 0;
}