#include <stdio.h>
// PQ-24,25 & 26 not shown in video
// PQ "29" shown but renamed 26.

// The code will work even if we skip the declaration here
int sum(int n);

int main()
{
    int n;
    printf("Enter the number up to which you want the sum to be calculated: ");
    scanf("%d", &n);
    printf("\nSum is: %d ", sum(n));
    return 0;
}

// recursive function
int sum(int n) 
{
    if (n == 1)
    {
        return 1;
    }
    int sumNt1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNt1 + n;
    return sumN;
}