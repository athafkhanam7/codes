#include<stdio.h>
int main()
{
    int startDay, startYear, targetYear, tempYear,targetDay;
    startDay = 1;
    startYear = 1990;
    targetYear = 2010;
    targetDay = startDay;
    for (tempYear = startYear +1 ; tempYear <= targetYear;tempYear++)
    {
       /* if( (tempYear % 4 == 0 && tempYear % 100 !=0 ) || (tempYear % 400 == 0))
            targetDay+=2;
        else
            targetDay++;*/
        targetDay += (tempYear % 4 == 0 && tempYear % 100 !=0 ) || (tempYear % 400 == 0) ? 2 : 1;
        if(targetDay>7)
            targetDay -= 7;
    //printf("%d ", tempYear);
    }
    switch(targetDay)
    {
        case 1 : printf("Monday\n"); break;
        case 2 : printf("Tuesday\n"); break;
        case 3 : printf("Wednesday\n"); break;
        case 4 : printf("Thursday\n"); break;
        case 5 : printf("Friday\n"); break;
        case 6 : printf("Saturday\n"); break;
        case 7 : printf("Sunday\n"); break;

    }

    return 0;
}
