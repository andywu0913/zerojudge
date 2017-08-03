/* 內容 ：
 * 在這個問題中你被要求寫一個程式來做數字基底的轉換。給你一個10進位或16進位的數，請你把他轉換成16進位或10進位的數。16進位的數總是以0x當開頭，其他所有的數都被當成是10進位。輸入中不會有不合法的數。
 * 輸入說明
 * 輸入含有多組測試資料。每組測試資料一列有一個不為負數的數，可能是一個10進位或16進位的數。請根據上述的敘訴判斷。這個數10進位的值一定小於 231 。 若輸入為負的10進位數字時代表輸入結束。請參考 Sample Input。
 * 輸出說明
 * 對每組測試資料輸出一列。如果輸入的是10進位的數，請輸出其16進位的值。如果輸入是16進位的數，請輸出其10進位的值。 如同輸入一樣，輸出的16進位的數也請以 0x 開頭。請參考Sample Output。
 * 範例輸入
 * 4
 * 7
 * 44
 * 0x80685
 * -1
 * 範例輸出
 * 0x4
 * 0x7
 * 0x2C
 * 525957
 * 測資資訊：
 * 記憶體限制： 512 MB
 * 公開 測資點#0 (100%): 1.0s , <1M
 * 提示：
 * 標籤：
 * 出處：
 * UVa10473
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int pow(int base, int exp);

int main()
{
	char temp[11];
	while(scanf("%s", temp) != EOF && temp[0] != '-')
	{
		if(temp[1] == 'x')
		{
			int number;
			sscanf(temp, "%x", &number);
			printf("%d\n", number);
		}
		else
		{
			int number;
			sscanf(temp, "%d", &number);
			sprintf(temp, "%x", number);
			int wordLength = strlen(temp);
			for(int i = 0; i < wordLength ; i++)
				temp[i] = toupper(temp[i]);
			printf("0x%s\n", temp);
		}
	}
	return 0;
}