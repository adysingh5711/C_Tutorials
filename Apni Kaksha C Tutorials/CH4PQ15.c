#include <stdio.h>
/*
Print the Sum of First n Natural Numbers.
Also, print them in reverse.
*/
int main()
{
    int i, num;
    printf("Enter the number upto which you want sum : ");
    scanf("%d", &num);

    int sum = 0;
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("The sum of numbers is : %d \n", sum);

    for (i = num; i >= 0; i--)
    {
        printf("%d", i);
    }
    return 0;
}