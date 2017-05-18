#include<stdio.h>

int main()
{
    int total=0,vdown,vup;
    scanf("%d %d",&vdown,&vup);
    if(vdown>vup)
    {
        int temp=vup;
        vup=vdown;
        vdown=temp;
    }
    if(vdown%2!=0)vdown++;
    if(vup%2!=0)vup--;

    for(int i=vdown;i<=vup;i+=2)
    {
        total+=i;
    }
    printf("%d",total);

    return 0;
}
