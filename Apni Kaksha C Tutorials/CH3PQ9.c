#include <stdio.h>

/*
Write a program to check if a student passed or failed.
marks > 30 is
PASS
marks <= 30 is
FAIL
*/
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30)
    {
        printf("Fail");
    }
    else if (marks >= 30 && marks <= 100)
    {
        printf("Pass");
    }
    else
    {
        printf("wrong marks");
    }
    return 0;
}