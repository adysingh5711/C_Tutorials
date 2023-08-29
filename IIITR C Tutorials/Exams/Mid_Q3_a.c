#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;
    
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("The sum is %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("The difference is %.2f\n", result);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = sqrt(num1);
            printf("The square root is %.2f\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
