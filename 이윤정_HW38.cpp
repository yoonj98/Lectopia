#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, j, k,money,res;
	int num1, num2, num3;

	do
	{
		printf("���� ����� ���� �ݾ� �Է� : ");
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
						printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", i, j, k);
					}
				}
			}
		}
		printf("��� �����Ͻðڽ��ϱ�?\n");
	} while (res == 1);	

	return 0;

}