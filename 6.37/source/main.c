#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


int recursiveMaximum(int b[], int size);

int main(void)
{
	int maximum;
	int i;
	int a[SIZE] = { 0 };
	printf("�п�J10�Ӿ�Ƹ��: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &a[i]);
	}
	
	maximum = recursiveMaximum(a, SIZE);
	printf("����ƪ��̤j�Ȭ�: %d\n", maximum);

	system("pause");
	return 0;
}

int recursiveMaximum(int b[], int size)
{
	if (size == 1)
	{
		return b[0];
	}
	else
	{
		int j = recursiveMaximum(b, size - 1);
		return b[size] > j ? b[size] : j;
	}
}