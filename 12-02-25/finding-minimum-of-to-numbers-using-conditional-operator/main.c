/******************************************************************************
rite a program to find the minimum of two numbers using ternery operater

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    a<b? printf("%d is minimum",a):printf("%d is minimum",b);
    

    return 0;
}
