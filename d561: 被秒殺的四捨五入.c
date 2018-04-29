/* 內容
 * 拿氣溫來說，攝氏15度和攝氏15.05度的差距對人來說差異實在不大，有了數學概數的觀念，我們可以透過四捨五入法來得到一個數字的估計值，進而方便統計。
 * 現在請你將一些小數利用程式來四捨五入。
 *
 * 輸入說明
 * 共計三個測資點，每個測資檔中有多行小數n(-1<=n<=1)，至多小數點以下有100位數
 *
 * 輸出說明
 * 請輸出四捨五入至小數點以下第二位的結果
 *
 * 範例輸入
 * 1.00000
 * 0.5
 * 0.715
 * 0.1234567890
 * -0.995
 *
 * 範例輸出
 * 1.00
 * 0.50
 * 0.72
 * 0.12
 * -1.00
 *
 * 測資資訊：
 * 記憶體限制： 512 MB
 * 公開 測資點#0 (70%): 1.0s , <1K
 * 公開 測資點#1 (15%): 1.0s , <1K
 * 公開 測資點#2 (15%): 1.0s , <1K
 * 提示 ： 
 * 12.6修正第三個測資點的錯誤(已經重測)！感謝liouzhou_101
 * 輸入輸出範例已修正！感謝example
 * 標籤:
 * 浮點數
 * 出處: 
 * jack1 [編輯： jack1 (我是韜哥我忘了拿通知單)]
 */

#include <stdio.h>
#include <string.h>

int searchForDecimalPoint(char num[]);
void checkCarry(char num[]);
int checkNoNegativeZero(char num[]);

int main(void)
{
	char num[104];
	while(scanf("%s", num) != EOF)
	{
		int decimalPointIndex = searchForDecimalPoint(num);
		
		if(decimalPointIndex == -1)
			printf("%s.00\n", num);
		else if(decimalPointIndex + 2 >= strlen(num))
			printf("%s0\n", num);
		else
		{
			if(num[decimalPointIndex + 3] > '4')
			{
				num[decimalPointIndex + 2] += 1;
				num[decimalPointIndex + 3] = '\0';
				checkCarry(num);
			}
			else
			{
				num[decimalPointIndex + 3] = '\0';
				if(checkNoNegativeZero(num) == 0)
				{
					printf("%s\n", &num[1]);
					continue;
				}
			}
			printf("%s\n", num);
		}
	}
	return 0;
}

int searchForDecimalPoint(char num[])
{
	int numLength = strlen(num);

	for (int i = 0; i < numLength; i++)
	{
		if(num[i] == '.')
			return i;
	}
	return -1;
}

void checkCarry(char num[])
{
	int lastIndex = strlen(num) - 1;

	for (int i = lastIndex, carry = 0; i >= 0; i--)
	{
		if(num[i] != '.' && num[i] != '-')
		{
			num[i] += carry;
			if(num[i] > '9')
			{
				num[i] -= 10;
				carry = 1;
			}
			else
				carry = 0;
		}

	}
}

int checkNoNegativeZero(char num[])
{
	int lastIndex = strlen(num) - 1;
	char isAllZero = 1;

	for (int i = lastIndex; i >= 0; i--)
	{
		if(num[i] != '0' && num[i] != '.' && num[i] != '-')
		{
			isAllZero = 0;
			break;
		}
	}

	if(isAllZero == 1 && num[0] == '-')
		return 0;
	return 1;
}
