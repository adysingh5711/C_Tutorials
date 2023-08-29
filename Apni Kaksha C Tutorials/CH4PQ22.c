#include <stdio.h>
// Print reverse of the table for a number n.
int main()
{
int n,i;
printf("Enter the number :");
scanf("%d",&n);
int fact=1;
for(i=10;i>=1;i--){
    fact=n*i;
    printf("\n %d",fact);
}
    return 0;
}