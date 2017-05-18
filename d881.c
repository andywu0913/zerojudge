#include<stdio.h>

int main()
{
    int differ;
    while(scanf("%d",&differ)!=EOF)
    {
        int total=0,num=1;
        for(int i=0;i<50;i++)
        {
            //printf("%d ",num);
            total+=num;
            num+=1+differ*i;
        }
        printf("%d\n",total);
    }
    return 0;
}
