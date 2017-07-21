#include <stdio.h>
#include <string.h>

int main()
{
	char input[2000];
	while(fgets(input, 2000, stdin) != NULL)
	{
		int inputLegth = strlen(input);
		int wordCount = 0;
		int isCounting = 0;
		for(int i = 0 ; i < inputLegth ; i++)
		{
			if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
			{
				if(isCounting == 0)
				{
					wordCount++;
					isCounting = 1;
				}
			}
			else
			{
				isCounting = 0;
			}
		}
		printf("%d\n", wordCount);
	}
	return 0;
}
