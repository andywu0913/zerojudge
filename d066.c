#include<stdio.h>

int main()
{
    int hh,mm;
    scanf("%d %d",&hh,&mm);
    if(hh==7){ if(mm>=30) printf("At School"); else printf("Off School");}
    else if(hh>7 && hh<17)printf("At School");
    else printf("Off School");
    return 0;
}
