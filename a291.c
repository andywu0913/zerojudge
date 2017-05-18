#include<stdio.h>

int main()
{
    int c1,c2,c3,c4,t1,t2,t3,t4,number;
    while(scanf("%d %d %d %d",&c1,&c2,&c3,&c4)!=EOF)
    {
        int b1=c1,b2=c2,b3=c3,b4=c4;
        scanf("%d",&number);
        for(int i=0;i<number;i++)
        {
            int a=0,b=0;
            scanf("%d %d %d %d",&t1,&t2,&t3,&t4);

            if(c1==t1) {a++; c1=-1; t1=-1;}
            if(c2==t2) {a++; c2=-1; t2=-1;}
            if(c3==t3) {a++; c3=-1; t3=-1;}
            if(c4==t4) {a++; c4=-1; t4=-1;}

            if(c1!=-1 && c1==t2)      {b++; c1=-1; t2=-1;}
            else if(c1!=-1 && c1==t3) {b++; c1=-1; t3=-1;}
            else if(c1!=-1 && c1==t4) {b++; c1=-1; t4=-1;}


            if(c2!=-1 && c2==t1)      {b++; c2=-1; t1=-1;}
            else if(c2!=-1 && c2==t3) {b++; c2=-1; t3=-1;}
            else if(c2!=-1 && c2==t4) {b++; c2=-1; t4=-1;}

            if(c3!=-1 && c3==t1)      {b++; c3=-1; t1=-1;}
            else if(c3!=-1 && c3==t2) {b++; c3=-1; t2=-1;}
            else if(c3!=-1 && c3==t4) {b++; c3=-1; t4=-1;}

            if(c4!=-1 && c4==t1)      {b++; c4=-1; t1=-1;}
            else if(c4!=-1 && c4==t2) {b++; c4=-1; t2=-1;}
            else if(c4!=-1 && c4==t3) {b++; c4=-1; t3=-1;}


            printf("%dA%dB\n",a,b);

            c1=b1; c2=b2; c3=b3; c4=b4;
        }
    }
    return 0;
}
