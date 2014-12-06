#include <stdio.h>

int main(void)
{
  int n = 13195;
  int i = 2;

  for (i = 2; i < n; i++) {
    while (n % i == 0) {
      n /= i;
    }
  }
  printf("%d\n", n);

  return 0;
}
