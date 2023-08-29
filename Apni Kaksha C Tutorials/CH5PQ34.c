#include <stdio.h>

// Write a function to print n terms of the fibonacci sequence.

int fibseq(int n);

int main()
{
    int n;
fibseq(9);
    return 0;
}

int fibseq(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibN = fibseq(n - 1) + fibseq(n - 2);
    printf("Fibonacchi %d is :%d\n",n,fibN);
    return fibN;
}