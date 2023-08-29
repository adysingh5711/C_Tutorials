#include <stdio.h>
// Keep taking numbers as input from user until user enters an odd number.
int main()
{
    int n;
    int i;
    for(i=0;i>=0 ;i++ )
    {
        printf("\n Enter a number");
        scanf("%d",&n);
        if(n%2!=0)
        break;
    }

    return 0;
}