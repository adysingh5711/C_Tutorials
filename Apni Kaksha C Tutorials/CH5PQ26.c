#include <stdio.h>
#include <math.h>
//PQ-24,25 & 26 not shown in video thus named 29th as 26
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The required square is: %lf",pow(n,2)); //Power (Pow) function gives its output in Double data type whose format dpecifier is %lf  
    return 0;
}