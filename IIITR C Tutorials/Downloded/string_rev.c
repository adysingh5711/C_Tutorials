#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("ENTER THE STRING:\n");
	gets(str);
	puts(strrev(str));
	return 0;
}
