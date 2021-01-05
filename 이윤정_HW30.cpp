#include <stdio.h>

int main() {
	int num;
	int i;
	printf("10진 정수를 입력하시오: ");
	scanf("%d", &num);
	
	printf("%d(10) = ",num);
	for (i = 0; i < 32; i++) 
	{
		if ((0x80000000 >> i) & num)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("(2)\n");
	return 0;
}