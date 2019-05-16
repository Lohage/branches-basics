#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, j = 10;
	printf("Enter ur number\n");
	scanf("%d", &i);
	if (i < j)
		printf("Defeat\n");
	else if (i > j)
		printf("Victory!!\n");
	else
		printf("Draw\n");
}