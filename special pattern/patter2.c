#include <stdio.h>

int main()
{
  int n, row, star, space, x;
  printf("enter no");
  scanf("%d", &n);

  x = 2 * n - 1;
  for (row = 1; row <= n; row++)
  {
    for (star = 1; star <= row; star++)
      printf("*");
    for (space = 1; space <= x; space++)
      printf(" ");
    x = x - 2;
    for (star = 1; star <= row; star++)
      printf("*");

    printf("\n");
  }
  return 0;
}
