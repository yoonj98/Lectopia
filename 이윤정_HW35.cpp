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

		printf("0보다 큰수를 입력하시오(%d번째) : ", flag);
		res=scanf("%d", &num);

		if (getchar() == '\n') //문자 예외
		{
			if (res == 1) //숫자로 입력
			{
				if (num < 0) //음수 예외
				{
					continue;
				}
				else //최종 정상 입력
				{
					flag++;
					sum += num;
					continue;
				}
			}
			else //%d +,- 입력 받는 것 예외 처리
			{
				continue;
			}
		}
		else //문자 입력
		{
			continue;
		}
	}

	printf("입력된 값의 총 합 : %d", sum);

	return 0;

}

