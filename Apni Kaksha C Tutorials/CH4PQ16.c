#include <stdio.h>
// Print the table of a number input by the user.
int main()
{
    int num,i;
    printf("Enter the number for which you want table : ");
    scanf("%d", &num);

    for (i= 0; i <= 10; i++)
    {
        printf("%d \n",num*i);
    }
    return 0;
}