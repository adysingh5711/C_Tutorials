#include <stdio.h>
#include <math.h>
int main()
{
    float P,R,T;
    printf("enter P,R,T");
    scanf("%f%f%f" , &P,&R,&T);
    float CI = P*pow((1+R/100),T);
    printf("CI is %f \n", CI);
    return 0;
}
