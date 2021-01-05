#include <stdio.h>
int input();

int main()
{
	int number;
	number=input();

	printf("입력된 값은 8진수로 %#o입니다.\n", number);
	printf("입력된 값은 16진수로 %#x입니다.", number);

	return 0;
}

int input()
{
	int number;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &number);

	return number;
}