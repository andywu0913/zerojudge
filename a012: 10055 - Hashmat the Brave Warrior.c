#include<stdio.h>

int main()
{
	long long int n1, n2;
	while(scanf("%lld %lld", &n1, &n2) != EOF)
	{
		printf("%lld\n", (n1-n2)*(n1>n2? 1:-1));
	}
	return 0;
}
