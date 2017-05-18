#include<stdio.h>

int main()
{
    int times,column;
    scanf("%d %d",&times,&column);
    int array1[column],array2[column];
    for(int i=0;i<times;i++)
    {
        int counter=0,temp=-1,j,k;
        for(int j=0;j<column;scanf("%d",&array1[j]),j++);
        for(int j=0;j<column;scanf("%d",&array2[j]),j++);
        for(j=0,k=0;j<column && k<column;)
        {
            for(k=0;j<column && k<column;)
            {
                if(array1[j]==array2[k] && array2[k]==temp) k++;
                else if(array1[j]==array2[k])
                {
                    temp=array1[j];
                    counter++;
                    k++;
                }
                else if(array2[k]>array1[j]) j++;
                else if(array2[k]<array1[j]) k++;
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
