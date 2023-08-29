#include <stdio.h>  
   
int main() {  
    int Odd; 
    printf("Odd numbers between 1 to 100 \n");  
    Odd = 1;
    while (Odd <= 100)
	 {  
        printf("%d ", Odd);
        // Add 2 to current Odd number to get next Odd number
       Odd = Odd+2;  
    }  
    int Even; 
    printf("\nEven numbers between 1 to 100 \n");  
    Even = 2;
    while (Even <= 100)
	 {  
        printf("%d ", Even);
        // Add 2 to current even number to get next even number
       Even = Even+2;  
    }  
    
   int User_input;
   printf("\nTo check wheather the number is even or odd enter the number \n");
   scanf("%d",&User_input);
   if (User_input%2==0)
   printf("The number provided is Even");
    else
   printf("The number provided is Odd");
    return 0;  
} 
