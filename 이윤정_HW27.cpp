#pragma warning (disable : 4996)
#include <stdio.h>

int input();

int main()
{
	int weight;
	int egg = 0;

	while (egg != 10)
	{
		weight = input();
		if (weight >= 150 && weight <= 500)
		{
			egg++;
			printf("현재 달걀의 수 : %d\n", egg);
			continue;
		}
		else if(0<weight && weight<150)
		{
			printf("메추리알 가지고 장난하지 마시오~ ^^\n");
			continue;
		}
		else if(500<weight)
		{
			printf("타조알 가지고 장난하지 마시오~^^\n");
			continue;
		}
		else
		{
			continue;
		}
	}
	printf("달걀 포장이 끝났습니다");;
	return 0;
}

int input()
{
	int num;
	printf("계란의 무게를 입력하세요(단위 : g) : ");
	scanf("%d", &num);

	if (getchar() == '\n')
	{
		return num;
	}
	else
	{
		input();
	}
}