/******************************************************************************

write a program ro create simple calculator using a switch statement

*******************************************************************************/
#include <stdio.h>

int main()
{
     int a,b ,choice;
    printf("__choices__\n");
    printf("1.Addition\n");
    printf("2.substraction\n");
    printf("3,multiplication \n");
    printf("4.division \n");
    printf("enter  first number :");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    printf("enter the choice : ");
    scanf("%d",&choice);
    switch(a,b,choice){
        case 1 : printf("%d + %d = %d",a,b,a+b);
        break;
        case 2 : printf("%d - %d = %d",a,b,a-b);
        break;
        case 3 : printf("%d * %d = %d",a,b,a*b);
        break;
        case 4 : printf("%d / %d = %d",a,b,a/b);
        break;
        case 5 : printf("invalid choice");
    }


    return 0;
}
