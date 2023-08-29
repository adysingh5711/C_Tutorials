#include<stdio.h>
#include<string.h>
int main()
{
	char c[]= "IIITRanchi";
	int len= strlen(c);
	int size= sizeof(c);
	printf(" strlen(c): %d  sizeof(c):  %d",len, size);
	 char ch[50]="IIITRanchi";
	 len= strlen(ch);
	size= sizeof(ch);
	printf(" strlen(c): %d  sizeof(c):  %d",len, size);
	return 0;
}
