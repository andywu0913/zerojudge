#include<stdio.h>
#include<string.h>

int main()
{
	int num;
	scanf("%d\n", &num);
	for(int i = 0 ; i<num ; i++)
	{
		char message[100];
		gets(message);
		int count = 0;
		for( int j = 0 ; j<strlen(message) ; j++)
			switch(message[j])
			{
				case ' ':	count += 1; break;
				case 's':	count += 4; break;
				case 't':	count += 1; break;
				case 'u':	count += 2; break;
				case 'v':	count += 3; break;
				case 'w':	count += 1; break;
				case 'x':	count += 2; break;
				case 'y':	count += 3; break;
				case 'z':	count += 4; break;
				default :	count += (message[j]-'a'+1) % 3 == 0? 3 : (message[j]-'a'+1) % 3 ;
			}
		printf("Case #%d: %d\n", i+1, count);
	}
	return 0;
}
