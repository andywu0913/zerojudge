#include<stdio.h>

int main()
{
    int lengh;
    while(scanf("%d",&lengh)!=EOF && lengh!=0)
    {
        for(int i=0;i<lengh;i++)
        {
            for(int j=0;j<lengh-1-i;printf("_"),j++);
            for(int j=0;j<i+1;printf("+"),j++);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
