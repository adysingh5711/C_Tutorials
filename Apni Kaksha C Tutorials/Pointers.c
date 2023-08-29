#include <stdio.h>



int main()
{
    int age =22;
    int *ptr=&age;
    // address
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",*ptr);
    printf("%p\n",&ptr);

    // value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));

    return 0; 
}

