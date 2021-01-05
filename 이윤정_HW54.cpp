#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

void input(char* str);
int numcheck(char* str);
void output(char* str, int sum);

int main()
{
	char str[100] = { 0, };
	int sum;

	while (1)
	{
		input(str);
		if (strcmp(str, "end") == 0)
			break;
		sum = numcheck(str);
		output(str, sum);
	}


	return 0;
}

void input(char* str)
{
	printf("������ �Է��Ͻÿ� : ");
	scanf("%s", str);

	return;
}

int numcheck(char* str)
{
	int i,k, sum = 0,dnum;
	unsigned int len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ((int)str[i] > 47 && (int)str[i] < 58) //���� �Ǻ� 
		{
			dnum = 1;
			k = i;
			while (k < len)
			{
				k++;
				if ((int)str[k] > 47 && (int)str[k] < 58) //���� �迭�� ���ڰ� ���� �� �Ǻ�
				{
					dnum *= 10; //���ӵ� ���ڶ�� ���� �ٸ� ���ڰ� �ƴ� �ϳ��� ���� ����
				}
				else
					break;
			}
			sum += dnum * (str[i] - '0');
		}
	}
	return sum;
}

void output(char* str, int sum)
{
	printf("\"%s\" ���� �� ���ڴ� [%d]�Դϴ�.\n", str, sum);
}