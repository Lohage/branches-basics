#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("Wellcome to EZ digit game\n");
	int i, j, n = 1, k;
	for (k = 0; k < n; k++){
		j = 54
		printf("Enter ur number 0 to 100\n");
		scanf("%d", &i);
		if (i < j)
			printf("Defeat\n");
		else if (i > j)
			printf("Victory!!\n");
		else
			printf("Draw\n");
		printf("Try again?\n1)Yes\n2)No\n");
		scanf("%d", &j);
		if(j == 1)
			n++;
	}
}