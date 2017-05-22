/* 內容 ：
 * 求一个数全部质因数之和
 * 比如，
 * 6 = 2 x 3，则输出 2 + 3 = 5
 * 8 = 2 x 2 x 2，则输出 2 + 2 + 2 = 6
 * 輸入說明 ：
 * 每行一个正整数，x<20000000, 以EOF为结束
 * 輸出說明 ：
 * 对应的因数和
 * 範例輸入 ：
 * 19
 * 32
 * 範例輸出:
 * 19
 * 10
 * 提示 ：
 * 標籤:
 * 數論 質數
 * 出處:
 * 海豚原创 (管理：)
 */ 

#include<stdio.h>
#define SIZE 4472
// Square root of 20000000 is 4472.14

unsigned char tableNumberOrdered[SIZE+1];
int num;

int tableSearch(int);

int main()
{
    tableNumberOrdered[0]=0;
    tableNumberOrdered[1]=0;

    for(unsigned int i=2;i<=SIZE;i++)
        tableNumberOrdered[i]=1;

    for(unsigned int i=2;i<=SIZE;i++)
        if(tableNumberOrdered[i]==1)
            for(unsigned int j=(i*i);j<=SIZE;j+=i)
                tableNumberOrdered[j]=0;

    while(scanf("%d",&num)!=EOF)
    {
        unsigned long long int accumulate=0;

        do
        {
            int temp=tableSearch(num);
            accumulate+=temp;
            num/=temp;

        }while(num!=1);

        printf("%d\n",accumulate);
    }
    return 0;
}

int tableSearch(int number)
{
    for(unsigned int i=2;i<=SIZE;i++)
        if(tableNumberOrdered[i]==1 && number%i==0)
            return i;
    return number;
}
