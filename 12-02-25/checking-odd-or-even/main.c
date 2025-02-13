/******************************************************************************

Welcome to GDB Online.
check wheather given number is odd or even the no should be given by user
*******************************************************************************/
#include <stdio.h>

int main()
{
   int num;
   printf("enter a number:");
   scanf("%d",&num);
   num%2==0?printf("even no"):printf("odd no");
   

    return 0;
}
