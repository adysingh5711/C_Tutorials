#include <stdio.h>
int main()
{
    int n, a;
    for (int n = 5; n > 0; n--)
    {
        for (int b = 0; b < a; b++)
        {
            printf(" ");
        }
        a++;
        for (int i = (2 * n - 1); i > 0; i--)
        {
            printf("*");
        }
        printf("\n");
    }
    a -=2;
    for (int n = 1; n < 5; n++)
    {
        for (int b = 0; b < a; b++)
        {
            printf(" ");
        }
        a--;
        for (int i = (2 * n + 1); i > 0; i--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}