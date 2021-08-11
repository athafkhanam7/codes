#include<stdio.h>
int main()
{

    int N, mul3, mul5, min;
    N=50;
    mul3 = 3;
    mul5 = 5;

    do
    {
    min = mul3 < mul5 ? mul3 : mul5;
    if(min <= N)
    printf("%d ", min);
    if(min == mul3)
        mul3+=3;
    if(min == mul5)
        mul5+=5;
    } while(min <= N);



    return 0;
}
