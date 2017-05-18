#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int number;
    scanf("%d",&number);
    int low[number],high[number];
    for(int i=0;i<number;i++)
    {
        scanf("%d",&low[i]);
        scanf("%d",&high[i]);
        if(sqrt(low[i])-(int)sqrt(low[i])==0)
        {
            low[i]=sqrt(low[i]);
        }
        else
        {
            low[i]=sqrt(low[i])+1;
        }

            if(sqrt(high[i])-(int)sqrt(high[i])==0)
        {
            high[i]=sqrt(high[i]);
        }
        else
        {
            high[i]=sqrt(high[i]);
        }

    }

    for(int i=0;i<number;i++)
    {
        int total=0;
        for(int j=low[i];j<=high[i];j++)
        {
            total+=j*j;
        }
        printf("Case %d: %d\n",i+1,total);
    }

    return 0;
}
