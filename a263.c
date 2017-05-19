/* 內容 ：
 * 給你兩個日期，問這兩個日期相差幾天。
 * 輸入說明 ：
 * 輸入有多筆測資，每筆測資有兩行，每行有三個整數依序是年、月、日。輸入以 EOF 作為結束，題目保證不會有不符合的測資出現。
 * 輸出說明 ：
 * 輸出兩個日期差幾天。
 * 範例輸入 ：  help
 * 2011 10 19
 * 2011 10 18
 * 範例輸出:
 * 1
 * 提示 ：
 * 年份在[0,9999]範圍內
 *
 * 標籤:
 * 曆法
 * 出處:
 * 板橋高中練習題 (管理：m80126colin)
 */

#include<stdio.h>
#include<stdlib.h>

struct Date
{
    int year;
    int month;
    int day;
};

int accumulateYear(int);
int accumulateMonth(int,int);
int isSpecialYear(int);

int main()
{
    char lineTemp[2][16];
    while(gets(lineTemp[0])!=NULL && gets(lineTemp[1])!=NULL)
    {
        struct Date date1;
        sscanf(lineTemp[0],"%d %d %d",&date1.year,&date1.month,&date1.day);
        struct Date date2;
        sscanf(lineTemp[1],"%d %d %d",&date2.year,&date2.month,&date2.day);

        int totalDayDate1=accumulateYear(date1.year)+accumulateMonth(date1.month,date1.year)+date1.day;
        int totalDayDate2=accumulateYear(date2.year)+accumulateMonth(date2.month,date2.year)+date2.day;

        printf("%d\n",abs(totalDayDate1-totalDayDate2));
    }
    return 0;
}

int accumulateYear(int year)
{
    int result=0;
    for(int i=0;i<year;i++)
        result+=(365+isSpecialYear(i));
    return result;
}

int accumulateMonth(int month,int year)
{
    int result=0;
    switch(month)
    {
    case 12: result+=30;
    case 11: result+=31;
    case 10: result+=30;
    case 9:  result+=31;
    case 8:  result+=31;
    case 7:  result+=30;
    case 6:  result+=31;
    case 5:  result+=30;
    case 4:  result+=31;
    case 3:  result+=(28+isSpecialYear(year));
    case 2:  result+=31;
    case 1:  break;
    }
    return result;
}

int isSpecialYear(int year)
{
    if(year%400==0 || (year%4==0 && year%100!=0))
            return 1;
    return 0;
}
