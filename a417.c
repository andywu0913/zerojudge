#include<stdio.h>

int main()
{
    int data_num,square,rotate;
    scanf("%d",&data_num);
    for(int i=0;i<data_num;i++)
    {
        scanf("%d %d",&square,&rotate);
        int array[square][square],rol=0,col=0,count=1;

        for(int j=0;j<square;j++)
        {
            for(int k=0;k<square;k++)
            {
                array[j][k]=0;
            }
        }

        for(int j=1;j<square*2;j++)
        {
            switch(j%4)
            {
                case 1://right
                    {
                        while(col<square && array[rol][col]==0)
                        {
                            array[rol][col]=count;
                            count++;
                            col++;
                        }
                        col--;
                        rol++;
                        break;
                    }
                case 2://down
                    {

                        while(rol<square && array[rol][col]==0)
                        {
                            array[rol][col]=count;
                            count++;
                            rol++;
                        }
                        rol--;
                        col--;
                        break;
                    }
                case 3://left
                    {
                        while(col>=0 && array[rol][col]==0)
                        {
                            array[rol][col]=count;
                            count++;
                            col--;
                        }
                        col++;
                        rol--;
                        break;
                    }
                case 0://up
                    {
                        while(rol>=0 && array[rol][col]==0)
                        {
                            array[rol][col]=count;
                            count++;
                            rol--;
                        }
                        rol++;
                        col++;
                        break;
                    }
            }
        }

        if(rotate==2)//switch
        {
            for(int j=0;j<square;j++)
            {
                for(int k=j;k<square;k++)
                {
                    int temp=array[j][k];
                    array[j][k]=array[k][j];
                    array[k][j]=temp;
                }
            }
        }

        for(int j=0;j<square;j++)
        {
            for(int k=0;k<square;k++)
            {
                printf("%5d",array[j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
