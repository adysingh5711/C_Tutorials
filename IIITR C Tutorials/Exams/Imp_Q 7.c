#include <stdio.h>
// Which one of the choices given below would be printed when the following program is executed? GATE IT 2006 | Question 51
int a1[] = {6, 7, 8, 18, 34, 67};
int a2[] = {23, 56, 28, 29};
int a3[] = {-12, 27, -31};
int *x[] = {a1, a2, a3};
void print(int *a[])
{
    printf("%d,", a[0][2]);
    printf("%d,", *a[2]);
    printf("%d,", *++a[0]);
    printf("%d,", *(++a)[0]);
    printf("%d\n", a[-1][+1]);
}
main()
{
    print(x);
}


/*
int *x[] = {a1, a2, a3}; line makes x[0] = a1 and likewise. Therefore whenever x[0] is referenced, internally a1 array is being looked upon.

• a[0][2] = a1[2] = 8

• *a[2] = *a3 = a3[0] = -12

• *++a[0] = *(++a[0]) = a1[1] = 7 : a[0] is now pointing to second element of a1.

• *(++a)[0] = *a2 = a2[0] = 23 : a is now pointing to array a2.

• a[-1][+1] = *(a1+1+1) = a1[2] = 8 : *(a-1) = a1+1 due to last two expressions.

Hence, correct answer would be (A) 8, -12, 7, 23, 8.
*/