/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    a>b?printf("%d is greater",a):b>c?printf("%d is greater",b): printf("%d is greater",c);
    

    return 0;
}
