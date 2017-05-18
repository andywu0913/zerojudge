#include<stdio.h>

int main()
{
    int times,lap;
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        scanf("%d",&lap);
        struct lap_count{
            int minute;
            int second;
            int total_second;
        }record[lap];
        for(int j=0;j<lap;j++)
        {
            scanf("%d %d",&record[j].minute,&record[j].second);
            record[j].total_second=record[j].minute*60+record[j].second;
        }
        printf("Track %d:\n",i+1);
        int best_lap=0;
        for(int j=1;j<lap;j++) if(record[j].total_second<record[best_lap].total_second) best_lap=j;
        printf("Best Lap: %d minute(s) %d second(s).\n",record[best_lap].minute,record[best_lap].second);
        int total_second=0;
        for(int j=0;j<lap;total_second+=record[j].minute*60+record[j].second,j++);
        total_second/=lap;
        printf("Average: %d minute(s) %d second(s).\n\n",total_second/60,total_second-(total_second/60)*60);
    }
    return 0;
}
