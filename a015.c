#include<stdio.h>
#include<stdlib.h>

int main()
{
    //while((ch=getc(stdin)) != ' ')
    int column,line;

    while(scanf("%d %d",&line,&column)!=EOF) //Ask line and column
    {
        int array[line][column];
        for(int i=0;i<line;i++) //Save in Array
        {
            for(int j=0;j<column;j++)
            {
                scanf("%d",&array[i][j]);
            }
        }

        //Convert

        for(int i=0;i<column;i++) //Print out Array
        {
            int j;
            for(j=0;j<line-1;j++)
            {
                printf("%d ",array[j][i]);
            }
            printf("%d\n",array[j][i]);
        }
    }
    return 0;
}
