#include<stdio.h>

int main()
{
    int number,zero=0,one=0,two=0;
    scanf("%d",&number);
    for(int i=0;i<number;i++)
    {
        long temp;
        scanf("%ld",&temp);
        switch(temp%3)
        {
            case 0: zero++; break;
            case 1: one++; break;
            case 2: two++; break;
        }
    }

    printf("%d %d %d",zero,one,two);

    return 0;
}
