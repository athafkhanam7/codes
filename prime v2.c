#include<stdio.h>
#include<math.h>
int main()
{
    long long N;
    int square_root, checkForFactor;
    N = 999998727899999;
    square_root = sqrt(N);
    for(checkForFactor = 2; checkForFactor <= square_root;checkForFactor++)
         if(N % checkForFactor == 0)
              break;

                if(checkForFactor > square_root)
                       printf("%lld is a Prime", N);
                       else
                        printf("%lld is NOT a Prime", N);
    return 0;
}
