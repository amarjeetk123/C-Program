#include <stdio.h>

int main()
{
    int n, row, x, col;
    printf("enter no of rows");
    scanf("%d", &n);
    x = 1;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d", x);
            x = x + 1;
        }
        printf("\n");
    }
    return 0;
}