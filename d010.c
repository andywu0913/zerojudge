#include<stdio.h>

int main()
{
    int number;
    while(scanf("%d",&number)!=EOF)
    {
        int total=0;
        for(int i=number/2;i>0;i--)
        {
            if(number%i==0) total+=i;
        }
        if(total<number)
            printf("����\n");
        else if(total>number)
            printf("�ռ�\n");
        else
            printf("������\n");
    }
    return 0;
}
