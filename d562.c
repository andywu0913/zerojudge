#include<stdio.h>

int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int array[num];
        for(int i=0;i<num;i++)
        {
            scanf("%d",&array[i]);
        }
        int flag_down=0,flag_up=num-1;

        for(int i=1;flag_up>=flag_down;i++)
        {
            if(i%2)
            {
                for(int j=flag_down;j<=flag_up;j++)
                {
                    printf("%d ",array[j]);
                }
                flag_down++;
                printf("\n");
            }
            else
            {
                for(int j=flag_up;j>=flag_down;j--)
                {
                    printf("%d ",array[j]);
                }
                flag_up--;
                printf("\n");
            }
        }

    }
    return 0;
}
