#include<stdio.h>
#include<string.h>

int convert(char *num)
{
    int total=0;
    for(int i=0;i<strlen(num);)
    {
        int temp=0;
        switch(num[i])
        {
            case 'I':
                if(num[i+1]=='V')
                {
                    total+=4;
                    i+=2;
                }
                else if(num[i+1]=='X')
                {
                    total+=9;
                    i+=2;
                }
                else
                {
                    total+=1;
                    i++;
                }
                break;
            case 'V':
                total+=5;
                i++;
                break;
            case 'X':
                if(num[i+1]=='L')
                {
                    total+=40;
                    i+=2;
                }
                else if(num[i+1]=='C')
                {
                    total+=90;
                    i+=2;
                }
                else
                {
                    total+=10;
                    i++;
                }
                break;
            case 'L':
                total+=50;
                i++;
                break;
            case 'C':
                if(num[i+1]=='D')
                {
                    total+=400;
                    i+=2;
                }
                else if(num[i+1]=='M')
                {
                    total+=900;
                    i+=2;
                }
                else
                {
                    total+=100;
                    i++;
                }
                break;
            case 'D':
                total+=500;
                i++;
                break;
            case 'M':
                total+=1000;
                i++;
                break;
        }
    }
    return total;
}

int main()
{
    char num_l[10],num_r[10];
    while(scanf("%s %s",num_l,num_r)==2)
    {
        int result=convert(num_l)-convert(num_r);
        if(result<0) result*=-1;
    //printf("%d %d\n",convert(num_l),convert(num_r));
        char number[5];
        sprintf(number,"%d",result);
        int index=0;
        if(result>1000)
        {
            switch(number[index])
            {
                case '1':
                    printf("M"); break;
                case '2':
                    printf("MM"); break;
                case '3':
                    printf("MMM"); break;
            }
            index++;
        }
        if(result>100)
        {
            switch(number[index])
            {
                case '1':
                    printf("C"); break;
                case '2':
                    printf("CC"); break;
                case '3':
                    printf("CCC"); break;
                case '4':
                    printf("CD"); break;
                case '5':
                    printf("D"); break;
                case '6':
                    printf("DC"); break;
                case '7':
                    printf("DCC"); break;
                case '8':
                    printf("DCCC"); break;
                case '9':
                    printf("CM"); break;
            }
            index++;
        }
        if(result>10)
        {
            switch(number[index])
            {
                case '1':
                    printf("X"); break;
                case '2':
                    printf("XX"); break;
                case '3':
                    printf("XXX"); break;
                case '4':
                    printf("XL"); break;
                case '5':
                    printf("L"); break;
                case '6':
                    printf("LX"); break;
                case '7':
                    printf("LXX"); break;
                case '8':
                    printf("LXXX"); break;
                case '9':
                    printf("XC"); break;
            }
            index++;
        }
        if(result>0)
        {
            switch(number[index])
            {
                case '1':
                    printf("I"); break;
                case '2':
                    printf("II"); break;
                case '3':
                    printf("III"); break;
                case '4':
                    printf("IV"); break;
                case '5':
                    printf("V"); break;
                case '6':
                    printf("VI"); break;
                case '7':
                    printf("VII"); break;
                case '8':
                    printf("VIII"); break;
                case '9':
                    printf("IX"); break;
            }
            printf("\n");
        }
        else
        {
            printf("ZERO\n");
        }
    }
    return 0;
}
