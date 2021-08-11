#include<stdio.h>
#include<math.h>
int main()
{
    int N,num, cube1, cube2,cuberoot,diff;
    N=40033;
    for(num = 1;  ; num++)
    {
        cube1 = num * num * num;
        if(cube1 > N ) break;
        diff = N - cube1;
        cuberoot = cbrt(diff);
        cube2 = cuberoot * cuberoot * cuberoot;
        if(cube1 + cube2 == N && cuberoot < num)
        {
             printf("%d^3 + %d^3 = %d\n",num, cuberoot,N);

        }


    }
}
