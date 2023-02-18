#include <stdio.h>

int main()
{
    int i,j,abtakkaprod;
    printf("enter a number");
    scanf("%d",&j);
    
    abtakkaprod=1;
    for(i=1;i<=j;i++)
       abtakkaprod=abtakkaprod*i;
       
    printf("Factoraial of %d is %d",j,abtakkaprod);

    return 0;
}
