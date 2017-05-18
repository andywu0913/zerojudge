#include<stdio.h>

int main()
{
    int n1,n2,n3,n4;
    while(scanf("%d %d",&n1,&n2)!=EOF && scanf("%d %d",&n3,&n4)!=EOF)
    {
        if(n1==n2 && n2==n3 && n3==n4 && n4==0) break;
        else if(n1*n3==n2*n4)
            printf("cheat!\n");
        else
        {
            int delta=n1*n4-n2*n3;
            int temp=n1;
            n1=n4;
            n4=temp;
            n2*=-1;
            n3*=-1;
            printf("%.5f %.5f\n",(double)n1/delta,(double)n2/delta);
            printf("%.5f %.5f\n",(double)n3/delta,(double)n4/delta);
        }
    }
    return 0;
}
