#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 11

int main(void)
{
	int total[SIZE] = { 0 };
	int i, sum1, sum2, sum3;
	srand(time(0));

	for (i = 1; i <= 36000; i++)
	{
		sum1 = 1 + rand() % 6;
		sum2 = 1 + rand() % 6;
		sum3 = sum1 + sum2;
		total[sum3-2]++;
	}

	printf("點數\t出現次數\n");
	
	for (i = 2; i <= 12; i++)
	{
		printf("%4d\t%d\n", i, total[i-2]);
	}

	system("pause");
	return 0;

}