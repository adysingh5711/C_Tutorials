#include<stdio.h>
#include<string.h>
int main()
{
	char name[56];
	printf("Enter your name in Upper case");
	gets(name);
	puts(strlwr(name));
	printf("Name In Lower Case is: %s",strlwr(name));
	return  0;
}
