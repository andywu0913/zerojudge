#include<stdio.h>

int main()
{
    int data_num=0;
    while(scanf("%d",&data_num)!=EOF)
    {
        int array[data_num];
        for(int i=0;i<data_num;i++)
        {
            scanf("%d",&array[i]);
        }

        for(int i=0;i<data_num-1;i++)
        {
            for(int j=i+1;j<data_num;j++)
            {
                if(array[i]>array[j])
                {
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }

        for(int i=0;i<data_num;i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
    }

    return 0;
}
