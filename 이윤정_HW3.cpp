#include <stdio.h>

int main()
{
	int time = 54321;
	int hour, min, sec;

	hour = time / 3600;
	time=time % 3600;

	min = time / 60;
	sec = time % 60;

	printf("%d�� %d�ð� %d�� %d�� �Դϴ�.",time, hour, min, sec);

	return 0;
}