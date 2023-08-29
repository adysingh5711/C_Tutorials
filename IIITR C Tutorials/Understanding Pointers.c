#include <stdio.h>
// & --> Address of Operator
// * --> Value at Address Operator or Indirection Operator
int main()
{
    int age = 22;
        printf("Value of age is: %d \n",age);
    // printf("Value of *ptr is: %d \n",*ptr);
    // printf("Value of *age is: %d \n",*age);
    // printf("Value of &ptr is: %d \n",&ptr);
    printf("Value of &age is: %d \n",&age);
    // printf("Value of _age is: %d \n",_age);
    // printf("Value of *_age is: %d \n",*_age);
    // printf("Value of &_age is: %d \n",&_age);
    int *ptr=&age;
        printf("Value of age is: %d \n",age);
    printf("Value of *ptr is: %d \n",*ptr);
    // printf("Value of *age is: %d \n",*age);
    printf("Value of &ptr is: %d \n",&ptr);
    printf("Value of &age is: %d \n",&age);
    // printf("Value of _age is: %d \n",_age);
    // printf("Value of *_age is: %d \n",*_age);
    // printf("Value of &_age is: %d \n",&_age);
    int _age=*ptr;
    printf("Value of age is: %d \n",age);
    printf("Value of *ptr is: %d \n",*ptr);
    // printf("Value of *age is: %d \n",*age);
    printf("Value of &ptr is: %d \n",&ptr);
    printf("Value of &age is: %d \n",&age);
    printf("Value of _age is: %d \n",_age);
    // printf("Value of *_age is: %d \n",*_age);
    printf("Value of &_age is: %d \n",&_age);
    return 0;
}