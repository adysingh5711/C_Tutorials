#include <stdio.h>

// The code will work even if we skip the declaration here
int fact(int n);
int main()
{
    printf ("Factorial is :%d",fact(5));
    return 0;
}

int fact (int n){
    if (n==1)
    {
        return 1;
    }
    int factN = fact(n-1)*n;
    return factN;
} n  