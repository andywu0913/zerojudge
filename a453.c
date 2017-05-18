#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int square=b*b-4*a*c,flag=0;

        for(int j=1;j*j<=square+1;j++)
        {
            if(j*j==square || square==0)
            {
                flag=1;
                break;
            }
        }


        if(flag)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
