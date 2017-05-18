#include<stdio.h>


int main()
{
    int number;
    scanf("%d",&number);
    int array[number],total=0;
    for(int i=0;i<number;scanf("%d",&array[i]),i++);
    for(int j=0;j<number;total+=array[j]*(j+1),j++);
    printf("%d",total);
    return 0;
}
