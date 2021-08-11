#include<stdio.h>

int main()
{
    int N, num, opCtr;
    N=50;
    num = 0;
    opCtr = 1;
    while(num <= N)
    {
    switch(opCtr)
    {
    case 1:
    case 4:
    case 7:
           num +=3; break;
    case 2:
    case 6:
           num +=2; break;
    case 3:
    case 5:
          num +=1; break;
    }
    if(num <= N)
    printf("%d ", num);
    opCtr++;
    if(opCtr > 7)
       opCtr=1;
    }


    return 0;
}
