/******************************************************************************
write a program to check whether the age of person is eligible for voting using ternery operetor,
the age should be given by the user

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    
    age>=18?printf("you are eligible for  voting"):printf("you are not eligible for voting");

    return 0;
}
