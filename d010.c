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
            printf("虧數\n");
        else if(total>number)
            printf("盈數\n");
        else
            printf("完全數\n");
    }
    return 0;
}
