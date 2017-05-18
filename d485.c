#include<stdio.h>

int main()
{
    unsigned int num1,num2;
    scanf("%i %i",&num1,&num2);
    printf("%i",(num2-num1)/2+(!(num1%2==1&&num2%2==1)));
    return 0;
}
