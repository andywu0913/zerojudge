#include<stdio.h>

int main()
{
    long num;
    scanf("%ld",&num);
    if(num<0)
    {
        num*=-1;
    }
    printf("%ld",num);
    return 0;
}
