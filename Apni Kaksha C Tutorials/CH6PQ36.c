#include <stdio.h>



int main()
{
    int *ptr;
    int x;
    
    ptr=&x;
    *ptr=0; //value at adress of x(since ptr points to x) //x=0

    printf("x=%d\n",x); //0
    printf(" *ptr=%d\n",*ptr); //0

    *ptr+=5; //x+=5
    printf("x=%d",x); //5
    printf(" *ptr=%d\n",*ptr); //5

    (*ptr)++; //(*ptr)=(*ptr)+1 i.e, x=x+1
    printf("x=%d",x); //5
    printf(" *ptr=%d\n",*ptr);
    return 0;
}

