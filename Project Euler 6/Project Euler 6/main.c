#include <stdio.h>

int sqr(int num);

int main() {
    int a = 1;
    int b = 100;
    int sumofsqr = 0;
    int sqrofsum = 0;
    for (a = 1; a <= b; a++) {
        sumofsqr += sqr(a);
        sqrofsum += a;
    }
    sqrofsum = sqr(sqrofsum);
    printf("%d\n", sqrofsum - sumofsqr);
    return 0;
}

int sqr(int num) {
    int result;
    result = num*num;
    return result;
}

