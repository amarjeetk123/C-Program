#include <stdio.h>

int main()
{
    int n, count, i;
    printf("enter any number");
    scanf("%d", &n);
    if (n == 0)
    {
        count = 1;
    }
    count = 0;
    while (n != 0)
    {
        n = (n / 10);
        count++;
    }

    printf("%d", count);
}