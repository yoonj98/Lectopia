#pragma warning (disable : 4996)
#include <stdio.h>

int input();

int main() {
	int num,i=1;
	num = input();

	if (num <= 5) {
		while (i <= num) {
			printf("*");
			i++;
		}
	}
	else {
		while (i <= num) {
			if (i % 5 != 0) {
				printf("*");
			}
			else {
				printf("*");
				printf("\n");
			}
			i++;
		}
	}
	return 0;
}

int input() {
	int num;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &num);
	return num;
}