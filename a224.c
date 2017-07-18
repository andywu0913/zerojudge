#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char input[1000];

	while(gets(input) != NULL)
	{
		int lenght = strlen(input);
		int alphabat[26] = {0};

		for(int i=0 ; i<lenght ; i++)
			if(isalpha(input[i]))
				alphabat[tolower(input[i])-'a']++;
		int odd=0;
		for(int i=0 ; i<26 ; i++)
			if(alphabat[i]%2 != 0)
				odd++;
		if(odd <= 1)
			printf("yes !\n");
		else
			printf("no...\n");
	}
	return 0;
}