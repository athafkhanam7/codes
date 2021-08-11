#include<stdio.h>
int main()
{
    int t1h, t1m, t1s, t2h, t2m, t2s, resH, resM, resS;
    int totSeconds1, totSeconds2, diffSeconds;
    t1h = 2;
    t1m = 50;
    t1s = 40;
    t2h = 6;
    t2m = 30;
    t2s = 50;
    totSeconds1 = (t1h * 3600) + (t1m * 60) + t1s;
    totSeconds2 = (t2h * 3600) + (t2m * 60) + t2s;
    diffSeconds = abs(totSeconds1 - totSeconds2);
    resH = diffSeconds / 3600;
    resM = (diffSeconds % 3600) / 60;
    resS = (diffSeconds % 3600) % 60;
    printf("%02d:%02d:%02d\n", t1h,t1m,t1s);
    printf("%02d:%02d:%02d\n", t2h,t2m,t2s);
    printf("%02d:%02d:%02d\n", resH,resM,resS);


    return 0;
}
