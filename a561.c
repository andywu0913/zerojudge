/* 內容
 * Background
 * 內存不足的情況下，請使用排序法。
 * The Problem
 * 給定一個 n 小於一千萬，每個非負數字不重複且都小一千萬，求其排序後的結果。
 *
 * 輸入說明
 * 請參考 Sample Input。
 *
 * 輸出說明
 * 只會有一組測資，請只輸出 index 可以被 10 整除的數字即可。
 * 意即 if(index mod 10 == 0) printf("%d", A[index]);
 *
 * 範例輸入
 * 30
 * 10 1 9 26 14 5 2 7 25 17 27 11 4 13 15 0 3 16 12 19 20 18 6 23 24 21 22 8 28 29 
 *
 * 範例輸出
 * 0 10 20 
 *
 * 測資資訊：
 * 記憶體限制： 6 MB
 * 公開 測資點#0 (100%): 10.0s , <50M
 * 提示 ： 
 * 標籤:
 * 出處: 
 * [編輯： morris1028 (碼畜)]
 */

#include <stdio.h>

unsigned char bitwiseRepresentation(int whichBit);

int main(void)
{
	unsigned char array[1250000] = { 0 };
	int number;
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		int temp;
		scanf("%d", &temp);
		array[temp / 8] = array[temp / 8] | bitwiseRepresentation(temp % 8);
	}

	for (int i = 0, appearTimes = -1; i < 10000000; i += 1)
	{
		if((array[i / 8] & bitwiseRepresentation(i % 8)) != 0)
		{
			appearTimes++;
			if(appearTimes % 10 == 0)
				printf("%d ", i);
		}
	}
	return 0;
}

unsigned char bitwiseRepresentation(int whichBit)
{
	unsigned char result = 0;
	switch(whichBit)
	{
		case 0:
			result = 128;
			break;
		case 1:
			result = 64;
			break;
		case 2:
			result = 32;
			break;
		case 3:
			result = 16;
			break;
		case 4:
			result = 8;
			break;
		case 5:
			result = 4;
			break;
		case 6:
			result = 2;
			break;
		case 7:
			result = 1;
			break;
		default:
			result = 0;
			break;
	}
	return result;
}