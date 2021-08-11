#include<stdio.h>
int main()
{

    int t1h, t1m, t1s, t2h, t2m, t2s, resH, resM, resS;
    t1h = 12;
    t1m = 50;
    t1s = 40;
    t2h = 6;
    t2m = 30;
    t2s = 50;
    resM =  resH = 0;
    resS = t1s + t2s;
    if(resS >= 60)
    {
        resS -= 60;
        resM = 1;
    }
    resM+=t1m+t2m;
    if(resM > 59)
    {
        resM -= 60;
        resH=1;
    }
    resH += t1h + t2h;
    printf("%02d:%02d:%02d\n", t1h,t1m,t1s);
    printf("%02d:%02d:%02d\n", t2h,t2m,t2s);
    printf("%02d:%02d:%02d\n", resH,resM,resS);




    return 0;
}
