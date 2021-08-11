#include<stdio.h>
#include<math.h>

int main()
{
    int N, checkForFactor,nof=0;
    // 1 to N
    N=1234*1234;     // 617283945
    for(checkForFactor = 1; checkForFactor <= sqrt(N); checkForFactor++ )
         if( N % checkForFactor == 0)
         {
             if(checkForFactor != N/checkForFactor)
                nof+=2;
             else
               nof+=1;
         }
if(nof % 2 == 0)
    printf("%d is not a PERFECT Square", N);
else
    printf("%d is a PERFECT Square",N);


    return 0;
}
