#include<stdio.h>

int main()
{
    int temp;
    scanf("%d",&temp);
    printf("%d",(temp>59)*399+
                (temp>17&&temp<60)*890+
                (temp>11&&temp<18)*790+
                (temp>5&&temp<12)*590);
    return 0;
}
