#include<stdio.h>


int main()
{
    int total=0,a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
            total++;
        }
    }
    printf("%d",total);
    return 0;
}
