#include <stdio.h>
#include <string.h>

int main()
{
	char faname[20];
	char name[20];

	unsigned int falen, nalen;

	printf("#성을 입력하시오 : ");
	scanf("%s", faname);

	printf("#이름을 입력하시오 : ");
	scanf("%s", name);

	falen = strlen(faname);
	nalen = strlen(name);

	printf("%s %s\n", faname, name);
	printf("%*d %*d", falen, falen, nalen, nalen);

	return 0;

}