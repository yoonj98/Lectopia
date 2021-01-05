#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, j, k,money,res;
	int num1, num2, num3;

	do
	{
		printf("현재 당신의 소유 금액 입력 : ");
		res = scanf("%d", &money);

		num1 = money / 500;
		num2 = money / 700;
		num3 = money / 400;

		for (i = 1;i<=num1 ; i++)
		{
			for (j = 1;j<=num2; j++)
			{
				for (k = 1;k<=num3; k++)
				{
					if (500 * i + 700 * j + 400 * k == money)
					{
						printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", i, j, k);
					}
				}
			}
		}
		printf("어떻게 구입하시겠습니까?\n");
	} while (res == 1);	

	return 0;

}