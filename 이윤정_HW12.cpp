#include <stdio.h>
#include <string.h>

//void myflush();

int main()
{
	char name[100];
	unsigned int len;

	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(name, 100, stdin);
	len = strlen(name);
	name[len-1]='\0';
	//myflush();

	printf("\"%s\"\n", name); //""�ȿ� ���α�
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"", name); //��������

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