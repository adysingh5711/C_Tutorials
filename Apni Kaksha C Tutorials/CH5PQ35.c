#include <stdio.h>

// Write a function to print the nth term of the fibonacci sequence.

int fibseq(int n);

int main()
{
    int n;
    printf("Enter a number to know its fibonacchi seq");
    scanf("%d", &n);
    printf("Fibonacchi seq is :%d", fibseq(n));
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
    return fibN;
}