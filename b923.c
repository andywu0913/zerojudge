#include<stdio.h>

int main()
{
    int times,index=-1,array[100];
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        int instruction;
        scanf("%d",&instruction);
        switch(instruction)
        {
        case 1:
            index--;
            break;
        case 2:
            printf("%d\n",array[index]);
            break;
        case 3:
            index++;
            scanf(" %d",&array[index]);
            break;
        }
    }
    return 0;
}
