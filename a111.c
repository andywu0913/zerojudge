#include<stdio.h>

int main()
{
	int num;
	while(scanf("%d", &num) != EOF && num != 0)
	{
		int total = 0;
		for(; num>0 ; num--)
			total += num * num;
		printf("%d\n", total);
	}
	return 0;
}