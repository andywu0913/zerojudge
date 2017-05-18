#include<stdio.h>
#include<stdlib.h>

int main()
{
    char array[1000];
    strcpy(array,"");
    int mid_num;

    while(scanf("%s",array)!=EOF)
    {
        int check_flag=0;

        if(strlen(array)%2==0)
        {
            for(int i=0;i<strlen(array)/2;i++)
            {
                if(array[strlen(array)/2-1-i]!=array[strlen(array)/2+i])
                {
                    check_flag++;
                }
            }
        }
        else
        {
            for(int i=0;i<strlen(array)/2;i++)
            {
                if(array[strlen(array)/2-1-i]!=array[strlen(array)/2+1+i])
                {
                    check_flag++;
                }
            }
        }

        if(check_flag==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

        strcpy(array,"");
    }
    return 0;
}
