#include<stdio.h>

int printAge(int age);
double printHeight(double height);

int main()
{
	char name[20]="이윤정";
	int age = 22;
	double height = 161;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

int printAge(int age)
{
	printf("나이 : %d\n", age);
	return 0;
}
double printHeight(double height)
{
	printf("키 : %.2lf", height);
	return 0;
}