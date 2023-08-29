#include <stdio.h>

int main()
{
    int arr[5], n, i, max1, max2;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
    }

    if (max2 == max1)
    {
        printf("There is no second highest number in the array.");
    }
    else
    {
        printf("The second highest number in the array is: %d", max2);
    }

    return 0;
}