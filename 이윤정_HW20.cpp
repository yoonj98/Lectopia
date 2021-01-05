#pragma warning (disable : 4996)
#include <stdio.h>

int input();
int calculate(int time);
double Tax(int money);
double output(int money, double tax, double allmoney);

int main()
{
	int time, money;
	double tax, allmoney = 0;

	time = input();
	money = calculate(time);
	tax = Tax(money);
	allmoney = money - tax;
	output(money, tax, allmoney);

	return 0;
}

int input() {
	int time;
	printf("1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &time);
	return time;
}

int calculate(int time) {
	int money;

	if (time <= 40) {
		return money = time * 3000;
	}
	else {
		return money = 40 * 3000 + (time - 40) * 4500;
	}
}
double Tax(int money) {
	double tax;

	if (money <= 100000) {
		return tax = (double)money*0.15;
	}
	else {
		return tax = 15000 + ((double)money - 100000)*0.25;
	}
}

double output(int money, double tax, double allmoney) {
	return printf("#총수입 : %d원\n#세  금 : %.lf원\n#실수입 : %.lf원", money, tax, allmoney);
}
