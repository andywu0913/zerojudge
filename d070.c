#include<stdio.h>

int year;

int main()
{
    while(scanf("%d",&year)!=EOF)
    {
        if(year==0) break;
        if(year%400==0) printf("a leap year\n");
        else if(year%4==0 && year%100!=0) printf("a leap year\n");
        else printf("a normal year\n");
    }
    return 0;
}
