#include<stdio.h>
#include<math.h>

int main()
{
    int N, checkForFactor;
    // 1 to N
    N=1234567890;     // 617283945
    for(checkForFactor = 1; checkForFactor <= sqrt(N); checkForFactor++ )
         if( N % checkForFactor == 0)
         {
             if(checkForFactor != N/checkForFactor)
                printf("%d %d\n", checkForFactor, N/checkForFactor);
             else
                printf("%d", checkForFactor);
         }



    return 0;
}
