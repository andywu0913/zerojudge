#include<stdio.h>

int main()
{
    int number;
    while(scanf("%d",&number)!=EOF)
    {
        int array[number],total=0;
        for(int i=0;i<number;i++)
        {
            scanf("%d",&array[i]);
            total+=array[i];
        }
        if(((float)total/number)>59) printf("no");
        else printf("yes");

        printf("\n");
    }
    return 0;
}
