#include<stdio.h>
int main()
{
    int num, N;
    N=21;
    for(num=1 ; num <= N; num++)
    if(num % 2 == 0)
       printf("%d ",num * num * num);
    else
        printf("%d ", num * num );



    return 0;
}
