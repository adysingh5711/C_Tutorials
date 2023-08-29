#include <stdio.h>
// Keep taking numbers as input from user until user enters a number which is multiple of 7.
int main()
{
    int n;
    int i;
    for(i=0;i>=0 ;i++ )
    {
        printf("\n Enter a number");
        scanf("%d",&n);
        if(n%7==0)
        break;
    }

    return 0;
}