#include<stdio.h>
// 2000
// 1965

int main()
{

    int ddA, mmA, yyyyA, ddB, mmB, yyyyB;
    printf("Enter Two Dates  dd/mm/yyyyy : ");
    scanf("%d/%d/%d %d/%d/%d", &ddA, &mmA, &yyyyA, &ddB, &mmB, &yyyyB);
    if(yyyyA > yyyyB)
        printf("A");
    else if(yyyyA < yyyyB)
        printf("B");
    else
    {
        if(mmA > mmB)
            printf("A");
        else if(mmA < mmB)
            printf("B");
        else
        {
            if(ddA > ddB)
                printf("A");
            else
                printf("B");
        }
    }





    return 0;
}
