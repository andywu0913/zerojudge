#include<stdio.h>
#include<stdlib.h>

int main()
{
    int total;
    char idNumber[11];
    while(scanf("%s",&idNumber)!=EOF)
    {
        switch(idNumber[0])
        {
            case 'A':total=1+0*9;break;
            case 'B':total=1+1*9;break;
            case 'C':total=1+2*9;break;
            case 'D':total=1+3*9;break;
            case 'E':total=1+4*9;break;
            case 'F':total=1+5*9;break;
            case 'G':total=1+6*9;break;
            case 'H':total=1+7*9;break;
            case 'I':total=3+4*9;break;
            case 'J':total=1+8*9;break;
            case 'K':total=1+9*9;break;
            case 'L':total=2+0*9;break;
            case 'M':total=2+1*9;break;
            case 'N':total=2+2*9;break;
            case 'O':total=3+5*9;break;
            case 'P':total=2+3*9;break;
            case 'Q':total=2+4*9;break;
            case 'R':total=2+5*9;break;
            case 'S':total=2+6*9;break;
            case 'T':total=2+7*9;break;
            case 'U':total=2+8*9;break;
            case 'V':total=2+9*9;break;
            case 'W':total=3+2*9;break;
            case 'X':total=3+0*9;break;
            case 'Y':total=3+1*9;break;
            case 'Z':total=3+3*9;break;
        }
        //printf("Eng: %d\n",total);
        for(int i=1;i<9;total+=(idNumber[i]-'0')*(9-i),i++);
        total+=idNumber[9]-'0';
        //printf("Num: %d\n",total);
        if(total%10==0) printf("real\n");
        else printf("fake\n");
    }
    return 0;
}
