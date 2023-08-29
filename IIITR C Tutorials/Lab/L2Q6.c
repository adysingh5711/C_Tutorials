#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if ((i + j) <= 4)
                printf(" ");
            else
                printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
