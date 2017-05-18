#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int max=0;
    for(int i=0;i<num;i++)
    {
        int temp;
        scanf("%d",&temp);
        if(temp>max) max=temp;
    }
    printf("%d",max);

    return 0;
}
