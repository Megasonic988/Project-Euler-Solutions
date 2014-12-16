#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Solution with Sieve of Eratosthenes

int main() {

//    Make the array
    int i, j;
    long long sum = -1, number = 10;



    int Array[10] = {0};
    for ( i = 1; i <= number; i++) {
        Array[i-1] = i;
    }

    for ( i = 1; i < number; i++) {
        if ( Array[i] != 0) {
            for ( j = i+1; j < number; j++) {
                if (Array[j]%Array[i] == 0) {
                    Array[j] = 0;
                }
            }
        }
        else {
            continue;
        }
    }
    for ( i = 0; i < number; i++) {
        sum += Array[i];
    }

    printf("%d", sum);


    return(0);
}
