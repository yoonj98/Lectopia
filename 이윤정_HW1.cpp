#include<stdio.h>

int printAge(int age);
double printHeight(double height);

int main()
{
	char name[20]="������";
	int age = 22;
	double height = 161;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

int printAge(int age)
{
	printf("���� : %d\n", age);
	return 0;
}
double printHeight(double height)
{
	printf("Ű : %.2lf", height);
	return 0;
}