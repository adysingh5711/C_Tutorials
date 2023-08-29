#include <stdio.h>
void main()
{
    int a = 1, value;
    value = a++ + ++a + ++a; // 3+3+2 (Right to left evaluation)
    printf("%d\n", value);

    a = 5;
    int b = 10;
    value = ++a * (11 + 7) % 30 - 35 / 7 + b--; //6*18%30-35/7+10 --> 108%30 -5 +10 --> 18-5+10 -->23
    printf("\n%d\n", value);
}