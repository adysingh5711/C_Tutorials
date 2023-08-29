#include <stdio.h>

/*
Will this code :
int x = 2;
if(x=1) {
printf("x is equal to 1");
else {
printf("x is not equal to 1");

a. give error
b. print "x is equal to 1 II
c. print "x is not equal to 1 "
*/
int main()
{
    int x = 2;
    if (x = 1)
        printf("x is equal to 1");
    else
    {
        printf("x is not equal to 1");
    }
    return 0;
}