#include <stdio.h>

int main()
{
    int a=10,b=20;
    printf("\n Before swapping");
    printf("a=%d b=%d",a,b);
    a=a-b;// -10
    b=a+b;//10
    a=b-a;// 10-(-10) = 20
    printf("\n After swapping");
    printf("a=%d b=%d",a,b);
    

    return 0;
}