#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",num/abs(num+(num==0)));
    return 0;
}
