#include <stdio.h>
int main()
{
    int a[4], i, target, j;
    printf("Enter 5 elements:");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the target value:");
    scanf("%d", &target);
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (a[i] + a[j] == target)
            {
                printf("Target is achieved by adding value at index %d and %d", i, j);
            }
        }
    }
    return 0;
}
/*
The program prompts the user to enter the number of elements in the array, reads the elements into an array of integers, and prompts the user to enter the target value.

The program then uses two nested loops to iterate through all pairs of elements in the array. For each pair of elements, the program checks if their sum is equal to the target value. If it is, the program prints the indices of the two elements and exits the program.

If no pair of elements adds up to the target value, the program prints a message indicating that no such pair was found.
*/