#include <stdio.h>
#pragma warning (disable : 4996)

int Menu();
void openFan(unsigned char *);
void offFan(unsigned char *);
void reverseFan(unsigned char *);
void displayFan(unsigned char *);
int fanNum(const char *msg);

int main()
{
	unsigned char fan = 0;
	int menu;

	while (1)
	{
		menu = Menu();
		if (menu == 1)
		{
			openFan(&fan);
			displayFan(&fan);
		}
		else if (menu == 2)
		{
			offFan(&fan);
			displayFan(&fan);
		}
		else if (menu == 3)
		{
			reverseFan(&fan);
			displayFan(&fan);
		}
		else
		{
			printf("���� \n");
			break;
		}
	}
}

int Menu()
{
	int menu;

	while (1)
	{
		printf("\n1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� : ");
		scanf("%d", &menu);
		if (getchar() == '\n')
		{
			if (menu == 1 || menu == 2 || menu == 3 || menu == 4)
			{
				break;
			}
			else
			{
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
			}
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
			while (getchar() != '\n')
			{
				;
			}
		}
	}
	return menu;
}


void openFan(unsigned char *fan)
{
	int num;

	printf("-----------------------------------------------------------------\n");
	printf("                   Fan ���� �۾� ���� ȭ��                       \n");
	printf("-----------------------------------------------------------------\n");
	num = fanNum("OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");

	*fan = *fan | 0x80 >> (8 - num);

	return;
}

void offFan(unsigned char *fan)
{
	int num; unsigned char sign = -1;

	printf("-----------------------------------------------------------------\n");
	printf("                   Fan �ݱ� �۾� ���� ȭ��                       \n");
	printf("-----------------------------------------------------------------\n");
	num = fanNum("CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");

	sign = sign ^ (0x80 >> (8 - num));

	*fan = *fan & sign;

	return;
}

void reverseFan(unsigned char *fan)
{
	unsigned char sign = -1;

	printf("-----------------------------------------------------------------\n");
	printf("                   Fan ��ü ��ȯ �۾� ���� ȭ��                       \n");
	printf("-----------------------------------------------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�. (ON, OFF ���� �ڹٲ�)\n");

	*fan = *fan ^ sign;

	return;
}

void displayFan(unsigned char *fan)
{
	int i = 0;
	int res;
	printf("-----------------------------------------------------------------\n");
	printf("8��FAN  7��FAN  6��FAN  5��FAN  4��FAN  3��FAN  2��FAN  1��FAN  \n");
	while (i < 8)
	{
		if (i == 0)
		{
			res = *fan & 0x80;
			if (res == 0)
			{
				printf("  %-6s", "OFF");
			}
			else
			{
				printf("  %-6s", "ON");
			}
		}
		else
		{
			res = *fan & (0x80 >> i);
			if (res == 0)
			{
				printf("  %-6s", "OFF");
			}
			else
			{
				printf("  %-6s", "ON");
			}
		}

		i++;
	}
	printf("\n-----------------------------------------------------------------\n");
}

int fanNum(const char *msg)
{
	int num;

	while (1)
	{
		printf("%s", msg);
		scanf("%d", &num);
		if (getchar() == '\n')
		{
			if (num == 1 || num == 2 || num == 3 || num == 4 || num == 5 || num == 6 || num == 7 || num == 8)
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

	return num;

}