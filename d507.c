#include<stdio.h>

void swap(int *a,int *b,int *c);

int main()
{
    int a,b,c,flag=-1;
    scanf("%d %d %d",&a,&b,&c);
    swap(&a,&b,&c);
    if(a*a>b*b+c*c)
    {
        printf("obtuse triangle\n");
    }
    else if(a*a<b*b+c*c)
    {
        printf("acute triangle\n");
    }
    else
    {
        printf("right triangle\n");
    }
    return 0;
}

void swap(int *a,int *b,int *c)
{
    if(*b>*c && *b>*a){int temp=*a; *a=*b; *b=temp;}
    if(*c>*a && *c>*b){int temp=*a; *a=*c; *c=temp;}
}
