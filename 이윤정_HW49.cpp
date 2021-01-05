#include<stdio.h>

void swap(int *ary,int size);

int main()
{
	int ary[] = { 1,2,3,4,5 };
	int i,size;

	size = sizeof(ary) / sizeof(ary[0]);

	printf("처음 배열에 저장된 값 : ");
	for(i=0;i<size;i++)
		printf("%3d", ary[i]);
	printf("\n");

	swap(ary,size);

	printf("바뀐 배열에 저장된 값 : ");
	for (i = 0; i < size; i++)
		printf("%3d", ary[i]);

	return 0;
}

void swap(int *ary,int size)
{
	int temp,i;

	for (i = 0; i < size/2; i++)
	{
		temp = ary[i];
		ary[i] = ary[size - i-1];
		ary[size - i-1] = temp;
	}
}