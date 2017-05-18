#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char array[202];
    while(scanf("%s",array)!=EOF && !(strlen(array)==1 && array[0]=='0'))
    {
        int total=0,error_flag=0;
        for(int i=0;i<strlen(array);i++)
        {
            array[i]=toupper(array[i]);
            if(array[i]-'A'+1>26 || array[i]-'A'+1<1) error_flag=1;
            else total+=array[i]-'A'+1;
        }
        if(error_flag) puts("Fail");
        else printf("%d\n",total);
    }
    return 0;
}
