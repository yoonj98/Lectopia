#include <stdio.h>

int main()
{
	int time = 54321;
	int hour, min, sec;

	hour = time / 3600;
	time=time % 3600;

	min = time / 60;
	sec = time % 60;

	printf("%d는 %d시간 %d분 %d초 입니다.",time, hour, min, sec);

	return 0;
}