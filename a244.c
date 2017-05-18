#include<stdio.h>

int main()
{
    long number,a,b,c;
    scanf("%ld",&number);
    long result[number];
    for(long i=0;i<number;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        switch(a)
        {
        case 1: result[i]=b+c; break;
        case 2: result[i]=b-c; break;
        case 3: result[i]=b*c; break;
        case 4: result[i]=b/c; break;
        }
    }
    for(long i=0;i<number;i++)
    {
        printf("%ld\n",result[i]);
    }

    return 0;
}
