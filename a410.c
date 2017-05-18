#include<stdio.h>


int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int delta=a*e-b*d,delta_x=c*e-b*f,delta_y=a*f-c*d;
    if(delta==0)
    {
        if(delta_x==0 && delta_y==0)
        {
            printf("Too many");
        }
        else
        {
            printf("No answer");
        }
    }
    else
    {
        printf("x=%.2f\ny=%.2f",(double)delta_x/delta,(double)delta_y/delta);
    }


    return 0;
}
