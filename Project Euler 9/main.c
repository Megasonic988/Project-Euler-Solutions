#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//This method is very slow as it tests for all cases in a loop that is very inefficient.
//Improvements would include bounds, optimizing square root checker, Euler's formula, etc.

int Che
int main()
{
ckSqrt (int n);
    int a, b, c;
    for (a = 1; a < 1000; a++) {
        for (b = 1; b < 1000; b++) {
            c = a*a + b*b;
            if(CheckSqrt(c) == 1 && a+b+sqrt(c) == 1000) {
                printf("%d, %d, %f\n", a,b, sqrt(c));
                exit(0);
            }
            if(CheckSqrt(c) == 1) {
                printf("%d, %d, %f ... Not Yet!\n", a,b, sqrt(c));
            }
        }
    }
    return 0;
}

int CheckSqrt (int n) {
    int i;
    for (i = 1; i < n/2 ; i++) {
        if (n == i*i) {
            return 1;
        }

    }
    return 0;
}
