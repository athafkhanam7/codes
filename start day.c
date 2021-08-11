#include<stdio.h>
int main()
{
    int startDay, startYear,targetYear,tempYear;
    startDay = 1;
    startYear = 1990;
    targetYear = 2021;
    for(tempYear=startYear+1;tempYear <= targetYear; tempYear++)
    {
        startDay += ( (tempYear%4 == 0 && tempYear % 100 != 0) || (tempYear % 40 == 0) ) ? 2 : 1;
        if(startDay>7)
            startDay-=7;
    printf("%d ", tempYear);
    switch(startDay)
    {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
    }
    }





    return 0;
}
