#include <stdio.h>

int main() {
	int num;
	int i;
	printf("10�� ������ �Է��Ͻÿ�: ");
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