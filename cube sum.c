/*

9442161065

Write a program to check if a given number N can be represented as sum of two cubes

1729 = 1^3 + 12^3 = 9^3 + 10^3
4104 = 2^3 + 16^3 = 9^3 + 15^3
13832 = 2^3 + 24^3 = 18^3 + 20^3
39312 = 2^3 + 34^3 = 15^3 + 33^3
46683 = 3^3 + 36^3 = 27^3 + 30^3
32832 = 4^3 + 32^3 = 18^3 + 30^3
40033 = 9^3 + 34^3 = 16^3 + 33^3
20683 = 10^3 + 27^3 = 19^3 + 24^3
65728 = 12^3 + 40^3 = 31^3 + 33^3
64232 = 17^3 + 39^3 = 26^3 + 36^3
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int N, cube1, cube2, cubeRoot, num , rem;
    N=1729;
    for(num = 1;  num <= cubeRoot  ; num++)
    {
        // we choose cube1
        cube1 = num * num * num;
        rem = N - cube1;
        cubeRoot = cbrt(rem);
        // calculated
        cube2 = cubeRoot * cubeRoot * cubeRoot;

        if(cube1 + cube2 == N && num < cubeRoot)
        {
            printf("%d^3 + %d^3 = %d\n", num, cubeRoot, N);
            getchar();
        }



    }



    return 0;
}














