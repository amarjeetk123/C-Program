#include <stdio.h>

int main()
{
    int row, star, space, n, x;
    printf("enter no of row");
    scanf("%d", &n);

    x = 2 * n - 2;
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
    x = 0;
    for (row = 1; row <= n; row++)
    {
        for (star = 1; star <= n + 1 - row; star++)
            printf("*");
        for (space = 1; space <= x; space++)
            printf(" ");
        x = x + 2;
        for (star = 1; star <= n + 1 - row; star++)
            printf("*");

        printf("\n");
    }

    return 0;
}