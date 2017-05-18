#include<stdio.h>

int year;

int main()
{
    scanf("%d",&year);
    while(scanf("%d",&year)!=EOF)
    {
        static int i=1;
        if(year%400==0) printf("Case %d: a leap year\n",i);
        else if(year%4==0 && year%100!=0) printf("Case %d: a leap year\n",i);
        else printf("Case %d: a normal year\n",i);
        i++;
    }
    return 0;
}
