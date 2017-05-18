#include<stdio.h>
#include<string.h>

int count_digit(int num)
{
    int digit=1;
    for(;num>=10;digit++,num/=10);
    return digit;
}

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int flag=0;
        for(;n<=m;n++)
        {
            int current_num=n;
            int digit=count_digit(current_num), total=0;
            for(int current_bit=1;current_bit<=digit;current_bit++)
            {
                int temp=current_num%10;
                for(int count=1;count<digit;count++)
                {
                    temp*=(current_num%10);
                }
                total+=temp;
                current_num/=10;
            }
            if(total==n)
            {
                printf("%d ",n);
                flag++;
            }
        }
        if(flag==0)
        {
            printf("none");
        }
        printf("\n");
    }
    return 0;
}
