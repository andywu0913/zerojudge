#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
             if(a>b&&b==c) puts("A\n");
        else if(b>a&&a==c) puts("B\n");
        else if(c>b&&b==a) puts("C\n");
        else if(a>b&&b>c) a-c>b? puts("A\n"):puts("B\n");//a>b>c
        else if(a>c&&c>b) a-b>c? puts("A\n"):puts("C\n");//a>c>b
        else if(b>a&&a>c) b-c>a? puts("B\n"):puts("A\n");//b>a>c
        else if(b>c&&c>a) b-a>c? puts("B\n"):puts("C\n");//b>c>a
        else if(c>a&&a>b) c-b>a? puts("C\n"):puts("A\n");//c>a>b
        else if(c>b&&b>a) c-a>b? puts("C\n"):puts("B\n");//c>b>a
    }
    return 0;
}
