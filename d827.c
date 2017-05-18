#include<stdio.h>

int main()
{
    int people_num;

    scanf("%d",&people_num);
    int dozen=people_num/12;
    int remain=people_num-dozen*12;
    printf("%d",dozen*50+remain*5);

    return 0;
}
