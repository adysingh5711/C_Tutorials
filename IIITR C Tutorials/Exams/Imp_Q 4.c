#include <stdio.h>
// What is printed by the following ANSI C program?   CS 2022 | Question 44

int main(int argc, char *argv[])
{
    char a = 'P';
    char b = 'x';
    char c = (a & b) + '*';
    char d = (a | b) - '-';
    char e = (a ^ b) + '+';
    printf("%c%c%c\n", c, d, e);

    return 0;
}

/*
(a&b)+ '*' = (80 & 120) + 42 =80+42=122=z

(a|b) - '-' = (80 | 120) -45=120- 45=75 = K 

(a^b) + '+'= (80 ^120)+43 = 40+43=83= S
*/