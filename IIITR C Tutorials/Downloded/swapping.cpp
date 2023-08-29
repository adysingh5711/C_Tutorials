#include<stdio.h>
void swap(int *, int *);
int main()
{
	int a, b,p,q;
	printf("enter your two numbers to be swapped.\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Initial values of a and b are: %d  %d\n",a,b);
	p=a;
	q=b;
	printf("Swapping the numbers using Call by value with the help of third variable.\n");
	int temp= b;
	b= a;
	a= temp;
	printf("a: %d b: %d \n ",a, b);
	
	a=p;
	b=q; 

	printf("Swapping the numbers using Call by value without third variable using mutliplication and division. \n");
	a=(a*b);
	
	b= a/b;
	a= a/b;
	printf("a: %d b: %d \n",a,b);
	
	
	a=p;
	b=q;
	
	
	
	
	printf("Swapping the numbers using Call by value without third variable using addition and subtraction.\n");
	
	a= a+b;
	 b= a-b;
	 a= a-b;
	 printf("a: %d b: %d \n",a, b);
	 
	 	
	a=p;
	b=q;
	
	
	 
	 printf("Swapping the numbers using Call by reference.");
	 swap(&a,&b);
	 return 0;
}
void swap(int *a, int *b)
{
	 
	
	 
	 printf("a: %d b: %d",*b,*a);
}




