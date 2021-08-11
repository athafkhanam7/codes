#include<stdio.h>
#include<math.h>

int main()
{
    int N, checkForFactor,nof=0;
    // 1 to N
    N=999999937;     // 617283945
    for(checkForFactor = 1; checkForFactor <= sqrt(N); checkForFactor++ )
         if( N % checkForFactor == 0)
         {
             if(checkForFactor != N/checkForFactor)
                nof+=2;
             else
               nof+=1;
         }
if(nof ==  2)
    printf("%d is Prime",N);
else
    printf("%d is NOT a Prime",N);



    return 0;
}
