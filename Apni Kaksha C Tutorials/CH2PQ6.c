#include<stdio.h>
int main(){
    //Odd->0
    //Even->1
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    printf("%d",a%2==0);
    return 0;
}