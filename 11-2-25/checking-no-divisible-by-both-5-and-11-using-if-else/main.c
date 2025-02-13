/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    if((a%5==0)&&(a%11==0)){
        printf("%d is divisible by both 5 and 11",a);
        }
        else{
            printf("%d is not divisible by both 5 and 11",a);
        }
        
        return 0;
}
