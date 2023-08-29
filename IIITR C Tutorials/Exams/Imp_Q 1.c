#include <stdio.h>

// What will be the output of the following C program segment? GATE CS 2012 | Question 3

int main()
{
    char inchar = 'A';
    switch (inchar)
    {
    case 'A':
        printf("choice A \n");
    case 'B':
        printf("choice B ");
    case 'C':
    case 'D':
    case 'E':
    default:
        printf("No Choice");
    }
    return 0;
}

/*
There is no break statement in case ‘A’. If a case is executed and it doesn’t contain break, then all the subsequent cases are executed until a break statement is found. That is why everything inside the switch is printed.
*/