#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",num/3+1-(num%3==0));
    return 0;
}
