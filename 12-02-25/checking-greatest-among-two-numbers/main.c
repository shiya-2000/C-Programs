/******************************************************************************

Welcome to GDB Online.
enter two number check whether which one is greater using ternery operator

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    a>b ? printf("%d is greater",a) : printf("%d is greater",b);

    return 0;
}
