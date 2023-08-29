#include <stdio.h>
//PQ-24,25 & 26 not shown in video thus named 27th as 24
//Declaration or Prototype
void printhello();
void printgoodbye();
int main()
{
    printhello();
    printgoodbye();
    return 0;
}

void printhello(){
    printf("\n Hello Everyone");
}
void printgoodbye(){
    printf("\n Goodbye Everyone");
}