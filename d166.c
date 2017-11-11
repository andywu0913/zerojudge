/* 內容 ：
 * 由1開始之連續數字a1.a2.a3...an相對有一反轉表：b1.b2...bm。其bm代表意思為：數字m的位置前面有幾個比大個個數。

 * 2 3 6 4 0 2 2 1 0
 * 第1個2為1前面有2個比它大的數
 * 第2個3為2前面有3個比它大的數
 * 第3個6為3前面有6個比它大的數....以此類推
 * 所以答案為
 * 5 9 1 8 2 6 4 7 3 
 * 數字1前面有2個比它大的數 5 9
 * 數字2前面有3個比它大的數 5 9 8

 * 輸入說明
 * 輸入的每一行含有一個由m個數所組成的數列(反轉表) 1<=m<=50，

 * 單獨一個 -1 在一行代表測試資料的結束

 * 輸出說明
 * 請輸出從 1 到 m 所代表的數列
 * 範例輸入
 * 2 3 6 4 0 2 2 1 0

 * -1
 * 範例輸出
 * 5 9 1 8 2 6 4 7 3
 * 測資資訊：
 * 記憶體限制： 512 MB
 * 公開 測資點#0 (100%): 1.0s , <1K
 * 提示 ： 
 * 感謝snail修正題目
 * 標籤:
 * 陣列
 * 出處: 
 * w11123 [編輯： w11123 (溫卡磊)]
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int num;
	struct node* nextNode;
}node;

void insertQueue(node**, int, int);
void displayQueue(node**);

int main(void)
{
	do
	{
		char line[200];
		char *lineTheRest = line;
		int reverseTable[50];
		int reverseTableSize = 0;
    	int offset;

		if(fgets(line, 200, stdin) == NULL)
			break;
		while (sscanf(lineTheRest, " %d%n", &reverseTable[reverseTableSize], &offset) == 1)
		{
			reverseTableSize++;
			lineTheRest +=offset;
		}
		if(reverseTable[0] == -1)
			break;

		node* result = NULL;
		for(int i = reverseTableSize - 1; i >= 0; i--)
			insertQueue(&result, i + 1, reverseTable[i]);
		displayQueue(&result);
	}while(1);

	return 0;
}

void insertQueue(node** result, int insertNumber, int order)
{
	for(int i = 0; i < order; i++)
		result = &(*result)->nextNode;
	node* temp = (*result);
	(*result) = malloc(sizeof(node));
	(*result)->num = insertNumber;
	(*result)->nextNode = temp;
}

void displayQueue(node** result)
{
	while((*result) != NULL)
	{
		printf("%d ", (*result)->num);
		result = &(*result)->nextNode;
	}
	printf("\n");
}