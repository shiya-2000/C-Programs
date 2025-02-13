/******************************************************************************

 program to check whwther a year is leapyear

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter a year :");
    scanf("%d",&a);
    (a%4==0&&a%100!=0)||(a%400==0) ? printf("%d is leap year",a):printf("%d is not leap year",a);
    return 0;
}
