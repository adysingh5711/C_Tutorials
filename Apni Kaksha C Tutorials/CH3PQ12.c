#include <stdio.h>
int main()
{
    //Write a Program to find if a character entered by user is uppercase or not.
    char ch;
    printf("Enter Character :");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z'){
        printf("Upper case \n");
    }
    else  if (ch>='a' && ch<='z'){
        printf("lower case \n");
    }
    else{
        printf("Not English Letter");
    }
    return 0;
}