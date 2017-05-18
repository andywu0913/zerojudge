#include<stdio.h>

int main()
{
    int hour;
    scanf("%d",&hour);
    hour-=15;
    hour+=24;
    printf("%d",hour%24);
    return 0;
}
