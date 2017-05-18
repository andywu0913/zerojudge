#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    num-=25;
    num*=-1;
    num+=60;
    num%=60;
    printf("%d",num);
    return 0;
}
