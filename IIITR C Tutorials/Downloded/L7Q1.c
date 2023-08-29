#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, i, max, min, temp;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
	printf("The array entered by user is: ");
    for (i = 0; i < n; i++) {                                       
        printf("\t %d ", arr[i]);
    }

    // Find the largest and smallest elements
    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("\nThe min value in array is : %d",min);
    printf("\nThe max value in array is : %d",max);

    // Swap the largest and smallest elements
    for (i = 0; i < n; i++) {
        if (arr[i] == max) {
            arr[i] = min;
        } else if (arr[i] == min) {
            arr[i] = max;                                                                                                                                        
        }
    }

    // Display the final array
    printf("\nThe final array with interchanged value is: ");
    for (i = 0; i < n; i++) {
        printf("\t%d ", arr[i]);
    }
    return 0;
}

//In this program, we first read the size of the array and the elements of the array from the user. We then find the largest and smallest elements in the array using a for loop. After that, we swap the largest and smallest elements using another for loop. Finally, we display the final array with the interchanged values.
