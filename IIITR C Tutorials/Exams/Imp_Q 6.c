// What is printed by the following ANSI C program? CS 2022 | Question 43

#include <stdio.h>
int main(int argc, char *argv[])
{
    int a[3][3][3] =
        {{1, 2, 3, 4, 5, 6, 7, 8, 9},
         {10, 11, 12, 13, 14, 15, 16, 17, 18},
         {19, 20, 21, 22, 23, 24, 25, 26, 27}};
    int i = 0, j = 0, k = 0;
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
            printf("%d ", a[i][j][k]);
        printf("\n");
    }
    return 0;
}

// Syntax: data_type array_name[block_size][row_size][column_size];

/*
a is a 3D array with the value

{{1,2,3,4,5,6,7,8,9},

{10,11,12,13,14,15,16,17,18},

{19,20,21,22,23,24,25,26,27}};

For i=0, j=0, and k=0,1 and 2 the output=1 2 3

For i=1, j=0, and k=0,1 and 2 the output=10 11 12

For i=2, j=0, and k=0,1 and 2 the output=19 20 21

So, option A is the correct answer. 

*/