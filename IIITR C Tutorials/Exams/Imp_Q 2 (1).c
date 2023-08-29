#include <stdio.h>
// What does the following fragment of C-program print? C Language | Set 8

int main()
{
    char c[] = "GATE 2011";
    char *p = c;
    // p now has the base address string "GATE 2011"
    printf("%s", p + p[3] - p[1]);
    // p[3] is 'E' and p[1] is 'A'.
    // p[3] - p[1] = ASCII value of 'E' - ASCII value of 'A' = 4
    // So the expression  p + p[3] - p[1] becomes p + 4 which is
    // base address of string "2011"

    return 0;
}