#include<stdio.h>
#include<string.h>
int main()
{
	
   char name[35];
   printf("enter your name in lowecase \n");
   gets(name);
   printf("your name in uppercase is: %s",strupr(name)) ;
   return 0;
	
	
	
}
