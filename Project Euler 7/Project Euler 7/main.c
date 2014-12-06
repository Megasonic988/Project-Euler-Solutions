
#include <stdio.h>

int PrimeCheck(int num);

int main() {
    int counter = 0;
    int n = 1;
    while(counter <= 10001) {
        if(PrimeCheck(n) == 1) {
            counter++;
        }
        n++;
    }
    printf("%d\n", n - 1);
    return(0);
}

int PrimeCheck(int num) {
    int i;
    for(i = 2; i < num; i++) {
        if(num%i == 0) {
            return(0);
            break;
        }
        else {
            continue;
        }
    }
    return(1);
}