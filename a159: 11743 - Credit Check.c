#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d\n", &num);

	for (int i = 0; i < num; i++)
	{
		char card[17];
		
		for (int i = 0; i < 16; i += 4)
			scanf("%s", &card[i]);

		int total = 0;

		for (int i = 0; i < 16; i += 2)
		{
			int temp2x = (card[i] - '0');
			temp2x *= 2;
			total += (temp2x / 10);
			total += (temp2x % 10);
		}

		for (int i = 1; i < 16; i += 2)
			total += (card[i] - '0');

		if(total % 10 == 0)
			printf("Valid\n");
		else
			printf("Invalid\n");
	}
	return 0;
}
