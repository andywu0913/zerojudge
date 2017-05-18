#include<stdio.h>

int main()
{
    long num_b,num_s;
    while(scanf("%ld %ld",&num_b,&num_s)!=EOF)
    {

        if(num_b<num_s)
        {
            long temp=num_b;
            num_b=num_s;
            num_s=temp;
        }
        for(long i=num_s;;i--)
        {
            if(num_s%i==0 && num_b%i==0)
            {
                printf("%d\n",i);
                break;
            }
        }

    }


    return 0;
}
