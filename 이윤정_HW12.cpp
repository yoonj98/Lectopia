#include <stdio.h>
#include <string.h>

//void myflush();

int main()
{
	char name[100];
	unsigned int len;

	printf("이름을 입력하시오 : ");
	fgets(name, 100, stdin);
	len = strlen(name);
	name[len-1]='\0';
	//myflush();

	printf("\"%s\"\n", name); //""안에 감싸기
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"", name); //왼쪽정렬

	return 0;

}

/*void myflush()
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	return;
}*/