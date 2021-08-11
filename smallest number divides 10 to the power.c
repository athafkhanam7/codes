#include<stdio.h>

int main()
{
    int N, rem, quo, ctr;
    scanf("%d", &N);
    rem = N % 9;
    if(rem !=0)
       printf("%d", rem);
     quo = N / 9;
   for(ctr = 0; ctr < quo; ctr++)
            printf("%d", 9);
   for(ctr = 0; ctr < N; ctr++)
            printf("%d",0);


    return 0;
}
