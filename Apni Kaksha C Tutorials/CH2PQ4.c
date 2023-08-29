#include<stdio.h>
/*Evaluate 
    a=5*2-2*3;
    b=5*2/2*3;
    c=5*(2/2)*3;
    d=5+2/2*3;
*/
int main (){
    int a,b,c,d;
    a=5*2-2*3;
    b=5*2/2*3;
    c=5*(2/2)*3;
    d=5+2/2*3;
    printf("%d \n",a); //10-2*3 = 10-6 = 4
    printf("%d \n",b); //10/2*3 = 5*3 = 15
    printf("%d \n",c); //5*1*3 = 5*3 = 15
    printf("%d \n",d); //5+1*3 = 5+3 = 8
    return 0;
}