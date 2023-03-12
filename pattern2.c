#include <stdio.h>

int main()
{
    int row, col, n;
    printf("give a number");
    scanf("%d", &n);
    row = 1;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}