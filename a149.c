#include<stdio.h>

int main()
{
    long number;
    scanf("%d",&number);
    long result[number];

    for(long i=0;i<number;i++)
    {
        scanf("%ld",&result[i]);
    }

    for(long long i=0;i<number;i++)
    {
        if(result[i]!=0)
        {
            long product=1;
            while(result[i]!=0)
            {
                product*=(result[i]%10);
                result[i]/=10;
            }
                result[i]=product;
        }

    }


    for(long i=0;i<number;i++)
    {
        printf("%ld\n",result[i]);
    }
    return 0;
}
