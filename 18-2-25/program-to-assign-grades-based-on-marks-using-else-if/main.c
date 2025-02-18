/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mark;
    printf("enter the mark:");
    scanf("%d",&mark);
    if(mark>=90){
        printf("%d is A+",mark);
    }
    else if(mark>=80){
        printf("%d is A",mark);
    }
    else if(mark>=70){
        printf("%d is B",mark);
    }
    else if(mark>=60){
        printf("%d is C",mark);
    }
    else{
        printf("%d is FAIL",mark);
    }
    

    return 0;
}
