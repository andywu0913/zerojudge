#include<stdio.h>

int main()
{
    int temp;
    while(scanf("%d",&temp)!=EOF)
    {
        printf("%d\n",temp-(temp%2==1));
    }
    return 0;
}
