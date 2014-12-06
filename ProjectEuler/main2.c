
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 21;
    int x = 2;
    for (x = 2; x <= num; x++) {
        if (num == 1) {
            printf ("%d\n", x);
        }
        if (num%x == 0) {
            num = num/x;
            x = 2;
        }
        else {
            printf ("error\n");
        }
    }
    return 0;
}
