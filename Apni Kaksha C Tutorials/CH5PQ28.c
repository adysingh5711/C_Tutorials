#include <stdio.h>
//shown as PQ 32 before 30
// The code will work even if we skip the declaration here
void printhello(int count);

int main()
{
    printhello(5); 
    return 0;
}

//recursive function
void printhello(int count){
    if (count==0){
        return;
    }
    printf("Hello World \n");
    printhello(count-1);
}