#include<stdio.h>

int main()
{
	int times;
	char url[10][100];
	int relativity[10];

	scanf("%d", &times);
	for(int i=0 ; i<times ; i++)
	{
		for(int j=0 ; j<10 ; j++)
			scanf("%s %d", &url[j], &relativity[j]);
		int biggestRelativity = relativity[0];
		for(int j=1 ; j<10 ; j++)
			if(relativity[j] > biggestRelativity)
				biggestRelativity = relativity[j];
		printf("Case #%d:\n", i+1);
		for(int j=0 ; j<10 ; j++)
			if(relativity[j] == biggestRelativity)
				printf("%s\n", url[j]);
	}
	return 0;
}