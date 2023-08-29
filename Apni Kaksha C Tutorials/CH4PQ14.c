#include <stdio.h>
// Print the numbers from O to n, if n is given by user
int main()
{
    int a, num;
    printf("Enter a number:");
    scanf("%d", &num);
    a = 0;
    while (a <= num)
    {
        printf("%d \n", a);
        a++;
    }
    return 0;
}