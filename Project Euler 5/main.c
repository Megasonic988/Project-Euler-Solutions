#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;
    int i;
    int max = 20;
    while(1) {
        for(i = 2; i <= max; i++) {

            if(x%i != 0) {
                break;
            }
            if(i == max) {
                printf("%d", x);
                exit(0);
            }
        }
        x++;
    }
    return 0;
}
