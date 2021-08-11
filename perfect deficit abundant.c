#include<stdio.h>
#include<math.h>
/* 10
1 2 5
8
*/
int main()
{
    int N, checkForFactor,sof=1;
    // 1 to N
    N=28;     // 617283945
    for(checkForFactor = 2; checkForFactor <= sqrt(N); checkForFactor++ )
         if( N % checkForFactor == 0)
         {
             if(checkForFactor != N/checkForFactor)
                sof+= checkForFactor + N/checkForFactor;
             else
               sof+=checkForFactor;
         }
if(N == sof)
     printf("%d is a PERFECT number, sum of factors is %d", N, sof);
else if (N > sof)
    printf("%d is a DEFICIT  number , sum of factors is %d", N, sof);
else
    printf("%d is a ABUNDANT number , sum of factors is %d", N, sof);
    return 0;
}
