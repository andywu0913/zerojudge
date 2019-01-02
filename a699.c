#include <stdio.h>
#include <math.h>

#define MAX 671065

int main(void)
{
	char primeTable[MAX];

	int sqrtMax = ((int)sqrt(MAX)) + 1;

	primeTable[0] = 0;
	primeTable[1] = 0;

	for (int i = 2; i < MAX; i++)
		primeTable[i] = 1;

	for (int i = 2; i < sqrtMax; ++i)
		if(primeTable[i] == 1)
			for (int j = 2; i * j < MAX; j++)
				primeTable[i * j] = 0;

	int num;
	while(scanf("%d", &num) != EOF)
	{

		if(primeTable[num] == 1)
			printf("It's a prime!!!\n");
		else
			printf("It's not a prime!!!\n");
	}
	return 0;
}