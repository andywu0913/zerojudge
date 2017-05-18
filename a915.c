#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int array[num][2];
    for(int i=0;i<num;i++)
    {
        scanf("%d %d",&array[i][0],&array[i][1]);
    }

    for(int i=0;i<num;i++)//x
    {
        for(int j=i;j<num;j++)
        {
            if(array[i][0]>array[j][0])
            {
                int temp=array[i][0];
                array[i][0]=array[j][0];
                array[j][0]=temp;
                temp=array[i][1];
                array[i][1]=array[j][1];
                array[j][1]=temp;
            }

        }
    }

    for(int demarcation=0;demarcation<num-1;demarcation++)//y
    {
        if(array[demarcation][0]==array[demarcation+1][0])
        {
            int end;
            for(end=demarcation+1;array[end][0]==array[end+1][0];end++);
            for(int x=demarcation;x<=end;x++)
            {
                for(int y=x;y<=end;y++)
                {
                    if(array[x][1]>array[y][1])
                    {
                        int temp=array[x][1];
                        array[x][1]=array[y][1];
                        array[y][1]=temp;
                    }
                }
            }
        }
    }


    for(int i=0;i<num;i++)
    {
        printf("%d %d\n",array[i][0],array[i][1]);
    }
    return 0;
}
