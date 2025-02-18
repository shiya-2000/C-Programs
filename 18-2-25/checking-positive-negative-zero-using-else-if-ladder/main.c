/******************************************************************************
write aprogram to check if a given  number is positive ,negative,or zero using an else if ladder

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    if(a<0){
        printf("%d is a negative number",a);
    }
    else if(a>0){
        printf("%d is a positive number",a);
    }
    else{
        printf("%d is zero",a);
    }
    return 0;
}
