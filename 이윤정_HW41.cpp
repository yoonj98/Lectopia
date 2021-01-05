#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, j;
	char alpa;

	while (1)
	{
		printf("영문자 대문자 입력('A'~'Z') : ");
		scanf("%c", &alpa);
		if (getchar() != '\n')
			break;
		else if ((int)alpa < 65 || (int)alpa>90)
			break;

		for (i = (int)alpa; i >= 65; i--)
		{
			for (j = (int)alpa; j >= i; j--)
			{
				printf("%c", j);		
			}
			printf("\n");
		}
	}
	return 0;
}