#include<stdio.h>

int main()
{
    int bit;
    while(scanf("%d",&bit)!=EOF)
    {
        int number[bit];
        for(int i=0;i<bit;i++)
            number[i]=0;
        do
        {
            for(int i=0;i<bit;i++)
                printf("%d",number[i]);
            printf("\n");

            number[bit-1]+=1;
            for(int i=bit-1;i>=0;i--)
                if(number[i]==2 && i!=0)
                {
                    number[i-1]++;
                    number[i]=0;
                }
        }while(number[0]!=2);
    }
    return 0;
}
