#include <stdio.h>

// The code will work even if we skip the declaration here
float convertTemp(float celsius);

int main()
{
    float far = convertTemp(37);
    printf("The temp in Farenheight is :%f",far);
    return 0;
}

float convertTemp(float celsius){
float far = celsius*(9/5.0)+32;
return far;
}