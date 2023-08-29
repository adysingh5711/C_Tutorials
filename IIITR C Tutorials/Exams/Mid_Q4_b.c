#include <stdio.h>
int PALL(int n);
int main()
{
    int x, n;
    printf("\n Enter Integer Number:");
    scanf("%d", &n);
    x = PALL(n);
    if (x == 1)
    {
        printf("\n %d is a Palindrome Number", n);
    }
    else
    {
        printf("\n %d is not a Palindrome Number", n);
    }
    return 0;
}

int PALL(int n)
{
    int i, r, s = 0;
    // LOOP TO FIND REVERSE OF A NUMBER
    for (i = n; i > 0;)
    {
        r = i % 10;
        s = s * 10 + r;
        i = i / 10;
    }
    /* CHECKING IF THE NUMBER ENTERED AND THE REVERSE NUMBER IS EQUAL OR NOT */
    if (s == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}