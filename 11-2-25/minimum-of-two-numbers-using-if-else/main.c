/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter another no :");
    scanf("%d",&b);
    if(a<b){
        printf("%d is minimum",a);
    }
    else{
        printf("%d is minimum",b);
    }

    return 0;
}
