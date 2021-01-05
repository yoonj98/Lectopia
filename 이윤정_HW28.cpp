#include <stdio.h>

int main()
{
	char ch;
	int alpa=0, num=0, space=0, etc=0;

	printf("영문 문장을 입력 하시오 : \n");
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
	printf("영문자 대소문자 개수 : %d개\n", alpa);
	printf("숫자문자 개수 : %d개\n", num);
	printf("여백문자 개수 : %d개\n", space);
	printf("그 외 기타 문자 개수 : %d개\n", etc);

	return 0;
}