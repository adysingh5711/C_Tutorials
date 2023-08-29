#include <stdio.h>
int main()
{
	int a,b,c,d ;
	a=b=c=d=5;
	a=a++ + ++a;
	printf("The final value is %d \n",a);
		b=b+++b++;
	printf("The final value is %d \n",b);
		c=c-- +c--;
	printf("The final value is %d \n",c);
		d=--d+--d;
	printf("The final value is %d \n",d);
	return 0;
}
