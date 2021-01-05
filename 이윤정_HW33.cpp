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
			printf("종료 \n");
			break;
		}
	}
}

int Menu()
{
	int menu;

	while (1)
	{
		printf("\n1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		scanf("%d", &menu);
		if (getchar() == '\n')
		{
			if (menu == 1 || menu == 2 || menu == 3 || menu == 4)
			{
				break;
			}
			else
			{
				printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
			}
		}
		else
		{
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
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
	printf("                   Fan 열기 작업 실행 화면                       \n");
	printf("-----------------------------------------------------------------\n");
	num = fanNum("OPEN할 FAN 번호를 입력하시오(1-8) : ");

	*fan = *fan | 0x80 >> (8 - num);

	return;
}

void offFan(unsigned char *fan)
{
	int num; unsigned char sign = -1;

	printf("-----------------------------------------------------------------\n");
	printf("                   Fan 닫기 작업 실행 화면                       \n");
	printf("-----------------------------------------------------------------\n");
	num = fanNum("CLOSE할 FAN 번호를 입력하시오(1-8) : ");

	sign = sign ^ (0x80 >> (8 - num));

	*fan = *fan & sign;

	return;
}

void reverseFan(unsigned char *fan)
{
	unsigned char sign = -1;

	printf("-----------------------------------------------------------------\n");
	printf("                   Fan 전체 전환 작업 실행 화면                       \n");
	printf("-----------------------------------------------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다. (ON, OFF 상태 뒤바뀜)\n");

	*fan = *fan ^ sign;

	return;
}

void displayFan(unsigned char *fan)
{
	int i = 0;
	int res;
	printf("-----------------------------------------------------------------\n");
	printf("8번FAN  7번FAN  6번FAN  5번FAN  4번FAN  3번FAN  2번FAN  1번FAN  \n");
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

	return num;

}