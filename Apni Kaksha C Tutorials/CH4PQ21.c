#include <stdio.h>
// Print the factorial of a number n.
int main()
{
int n,i;
printf("Enter the number :");
scanf("%d",&n);
int fact=1;
for(i=1;i<=n;i++){
    fact*=i;
}
printf("%d",fact);
    return 0;
}