#pragma warning (disable : 4996)
#include <stdio.h>

int main() 
{
	int sum = 0, flag = 1;
	int num,i,res;

	for (i = 0; ; i++)
	{
		if (flag == 6)
			break;

		printf("0���� ū���� �Է��Ͻÿ�(%d��°) : ", flag);
		res=scanf("%d", &num);

		if (getchar() == '\n') //���� ����
		{
			if (res == 1) //���ڷ� �Է�
			{
				if (num < 0) //���� ����
				{
					continue;
				}
				else //���� ���� �Է�
				{
					flag++;
					sum += num;
					continue;
				}
			}
			else //%d +,- �Է� �޴� �� ���� ó��
			{
				continue;
			}
		}
		else //���� �Է�
		{
			continue;
		}
	}

	printf("�Էµ� ���� �� �� : %d", sum);

	return 0;

}

