/* 內容 ：
 * 請判斷某數是否為質數
 * 輸入說明 ：
 * 輸入有多組測試資料（以EOF結尾），每組測試資料占一行，只包含一個整數x, 2 ≦ x ≦ 2147483647。
 * 測試資料至多有200000筆。
 * 輸出說明 ：
 * 對於每組測試資料，如果輸入的x為質數，則輸出一行「質數」（不含引號）；否則輸出一行「非質數」（不含引號）。詳見範例測試資料。
 * 範例輸入 ：
 * 13
 * 14
 * 範例輸出:
 * 質數
 * 非質數
 * 提示 ：
 * 注意逾時
 *
 * 標籤:
 * 建表 數論 質數
 * 出處:
 */

#include<stdio.h>
#define SIZE 46340
//Square root of 2^31-1 is 46340.95

unsigned char tableNumberOrdered[SIZE+1];
unsigned int tableOnlyPrimeNum[SIZE+1];
unsigned int tableOnlyPrimeNumLastIndex=0;
unsigned int num;

int tableSearch(unsigned int number);

int main()
{
    for(unsigned int i=2;i<=SIZE;i++)
        tableNumberOrdered[i]=1;

    tableNumberOrdered[0]=0;
    tableNumberOrdered[1]=0;

    for(unsigned int i=2;i<=SIZE;i++)
        if(tableNumberOrdered[i]==1)
        {
            tableOnlyPrimeNum[tableOnlyPrimeNumLastIndex]=i;
            tableOnlyPrimeNumLastIndex++;

            for(unsigned int j=(i*i);j<=SIZE;j+=i)
                tableNumberOrdered[j]=0;
        }

    while(scanf("%d",&num)!=EOF)
    {
        if(tableSearch(num))
            printf("質數\n");
        else
            printf("非質數\n");
    }
    return 0;
}

int tableSearch(unsigned int number)
{
    if(number<=SIZE)
        if(tableNumberOrdered[number]==1)
            return 1;
        else
            return 0;
    else
        for(unsigned int i=0;i<tableOnlyPrimeNumLastIndex;i++)
            if(number%tableOnlyPrimeNum[i]==0)
                return 0;
        return 1;
}
