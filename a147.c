#include<stdio.h>

int main()
{
    int max_num;
    while(1)
    {
        scanf("%d",&max_num);
        if(max_num==0)
        {
            break;
        }
        for(int i=1;i<max_num;i++)
        {
            if(i%7!=0)
            {
                printf("%d ",i);
            }

        }

        printf("\n");
    }

    return 0;
}
