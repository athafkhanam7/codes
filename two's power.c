#include<stdio.h>
int main()
{
    int num, rem, sum_of_rem,base=2;
    num = 1;
    sum_of_rem = 0;
    while(num != 0)
    {
    rem = num % base;
    sum_of_rem += rem;
    num /= base;
    }

    if(sum_of_rem == 1)
        printf("It is a power of %d", base);
    else
        printf("Its NOT  a power of %d", base);



    return 0;
}
