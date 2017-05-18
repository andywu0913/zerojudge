#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ans_num;
    while(scanf("%d",&ans_num)!=EOF)
    {
        switch(ans_num)
        {
            case 0  ... 10:ans_num*=6; break;
            case 11 ... 20:ans_num=10*6+(ans_num-10)*2; break;
            case 21 ... 40:ans_num=10*6+10*2+(ans_num-20); break;
            default: ans_num=100;
        }

        printf("%d\n",ans_num);
        fflush(stdin);
    }
    return 0;
}

