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
    N=6;     // 617283945
    for(checkForFactor = 2; checkForFactor <= sqrt(N); checkForFactor++ )
         if( N % checkForFactor == 0)
         {
             if(checkForFactor != N/checkForFactor)
                sof+= checkForFactor + N/checkForFactor;
             else
               sof+=checkForFactor;
         }
printf("Sum of Factors of %d is %d\n", N, sof);

    return 0;
}
