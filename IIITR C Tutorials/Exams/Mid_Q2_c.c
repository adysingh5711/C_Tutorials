#include <stdio.h>
int main()
{
    int i, j, k, l, m, count = 1;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            for (k = 1; k <= 2; k++)
            {
                if ((i + j + k) == 5)
                {
                    printf("%d %d %d \n", i, j, k);
                    count++;
                }
            }
        }
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            for (k = 1; k <= 2; k++)
            {
                for (l = 1; l <= 2; l++)
                {
                    if ((i + j + k + l) == 5)
                    {
                        printf("%d %d %d %d \n", i, j, k, l);
                        count++;
                    }
                }
            }
        }
    }
    printf("Count is %d", count);
    return 0;
}

// Alternative Approach

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of steps: ");
//     scanf("%d", &n);
    
//     int prev1 = 1;
//     int prev2 = 1;
//     int dp;
    
//     for (int i = 2; i <= n; i++) {
//         dp = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = dp;
//     }
    
//     printf("The number of distinct ways to climb %d steps is %d\n", n, dp);
    
//     return 0;
// }
