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
		printf("���� �ܾ��� %d�� �Դϴ�.\n\n", money);

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
			printf("����\n");
			break;
		}
	}
}

char menu()
{
	char menu;


	while (1)
	{
		printf("�޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
		scanf("%c", &menu);

		if (menu == 'i' || menu == 'o' || menu == 'q')
		{
			break;
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
			}
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");

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
	inputMoney = inputInt("�Աݾ��� �Է��ϼ��� : ");
	while (1)
	{
		if (inputMoney < 0)
		{
			inputMoney = inputInt("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
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
	outputMoney = inputInt("��ݾ��� �Է��ϼ��� : ");

	while (1)
	{
		if (outputMoney < 0)
		{
			outputMoney = inputInt("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
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
		printf("�ܾ��� �����մϴ�.\n");
	}

	return;
}