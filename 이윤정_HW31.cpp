#include <stdio.h>
#pragma warning (disable : 4996)

char menu();

void deposit(int *);
void withdraw(int *);
int inputInt(const char *msg);

int main()
{
	int money;
	money = 0;


	while (1)
	{
		printf("현재 잔액은 %d원 입니다.\n\n", money);

		char m;
		m = menu();

		if (m == 'i')
		{
			deposit(&money);
		}
		else if (m == 'o')
		{
			withdraw(&money);
		}
		else
		{
			printf("종료\n");
			break;
		}
	}
}

char menu()
{
	char menu;


	while (1)
	{
		printf("메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		scanf("%c", &menu);

		if (menu == 'i' || menu == 'o' || menu == 'q')
		{
			break;
		}
		else
		{
			printf("잘못 입력하셨습니다.\n\n");
			while (getchar() != '\n')
			{
				;
			}

		}
	}
	return menu;
}


int inputInt(const char *msg)
{
	int money, res;
	printf("%s", msg);
	while (1)
	{
		res = scanf("%d", &money);
		if (getchar() == '\n')
		{
			if (res == 1)
			{
				break;
			}
			else
			{
				printf("잘못 입력하셨습니다. 다시 입력하십시오 : ");
			}
		}
		else
		{
			printf("잘못 입력하셨습니다. 다시 입력하십시오 : ");

			while (getchar() != '\n')
			{
				;
			}
		}
	}

	return money;


}

void deposit(int *money)
{
	int inputMoney;
	inputMoney = inputInt("입금액을 입력하세요 : ");
	while (1)
	{
		if (inputMoney < 0)
		{
			inputMoney = inputInt("잘못 입력하셨습니다. 다시 입력하십시오 : ");
		}
		else
		{
			break;
		}
	}

	*money = *money + inputMoney;

	return;

}

void withdraw(int *money)
{
	int outputMoney;
	outputMoney = inputInt("출금액을 입력하세요 : ");

	while (1)
	{
		if (outputMoney < 0)
		{
			outputMoney = inputInt("잘못 입력하셨습니다. 다시 입력하십시오 : ");
		}
		else
		{
			break;
		}
	}

	if (outputMoney <= *money)
	{
		*money = *money - outputMoney;
	}
	else
	{
		printf("잔액이 부족합니다.\n");
	}

	return;
}