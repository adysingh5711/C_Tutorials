#include <stdio.h>
#include <math.h>
//shown as PQ 31 before 30

// The code will work even if we skip the declaration here
float AreaSquare(float x);
float AreaCircle(int y);
float AreaRectangle(int x, int y);


int main()
{
    float side,radius,length,breadth;
    printf("\nEnter the side of square");
    scanf("%f",&side);
    printf("\nArea is : %f",AreaSquare(side));

    printf("\nEnter the side of Circle");
    scanf("%f",&radius);
    printf("\nArea is : %f", AreaCircle(radius));

    printf("\nEnter the sides of rectangle (Length, Breadth)");
    scanf("%f%f",&length,&breadth);
    printf("\nArea is : %f", AreaRectangle(length,breadth));   
    return 0;
}

float AreaSquare(float x){
return x*x;
}

float AreaCircle(int y){
return 3.14*y*y;
}

float AreaRectangle(int x, int y){
return 2*(x+y);
}