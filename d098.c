#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char lineRegister[256];
    char *numRegister;
    while(gets(lineRegister)!=NULL)
    {
        int total=0;
        numRegister=strtok(lineRegister," ");

        while(numRegister!=NULL)
        {
            int isNumber=1;
            for(int i=0;i<strlen(numRegister);i++)
                if(*(numRegister+i)<'0' || *(numRegister+i)>'9')
                    isNumber=0;
            if(isNumber)
            total+=atoi(numRegister);
            numRegister=strtok(NULL," ");
        }
        printf("%d\n",total);
    }
    return 0;
}
