#include <stdio.h>

// Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.

float CalcPer (float a,float b,float c);

int main()
{
    float a,b,c;
    printf("Enter marks in Science :");
    scanf("%f",&a);
    printf("\nEnter marks in Maths :");
    scanf("%f",&b);
    printf("\nEnter marks in Sanskrit :");
    scanf("%f",&c);
    printf("The Percentage of the student is :%f",CalcPer(a,b,c));
    return 0;
}

float CalcPer (float a,float b,float c){
    return((a+b+c)/3);
}