
#include <stdio.h>
#include <ctype.h>

int main()
{
    char value;
    printf("Enter the value : ");
    scanf(" %c",&value);
    if(isupper(value)){
        printf("isupper");
    }
    else if(islower(value)){
        printf("islower");
    }
    else if(isdigit(value)){
        printf("isdigit");
    }
    else{
        printf("is special character");
    }
    return 0;
}