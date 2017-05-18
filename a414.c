#include<stdio.h>

int main()
{
    while(1)
    {
        unsigned int n,carry_times=0;
        scanf("%d",&n);
        if(n==0) {break;}
        int bin[99],flag=0;
        do{
            bin[flag]=n%2;
            n/=2;
            flag++;
        }while(n!=0);

        for(int i=0;i<flag;i++)
        {
            if(bin[i]==1)
            {
                carry_times++;
            }
            else
            {
                break;
            }

        }
        printf("%d\n",carry_times);
    }


    return 0;
}
