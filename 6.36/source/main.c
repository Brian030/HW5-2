#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(char  st[], int j);

int main(void)
{
	char string[] = "Hello world";
	int i = strlen(string);

	stringReverse(string, i);
	puts("");
	system("pause");
	return 0;
}

void stringReverse(char  st[], int j)
{
	if (j >= 0)
	{
		printf("%c", st[j]);
		j--;
		stringReverse(st, j);	
	}
}
