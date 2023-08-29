/* Simple Interest Program */
#include<stdio.h>
int main ()
{
	int Principal, Time;
	float Rate, SI;
	printf ("Please enter the value for the Principal, Time, Rate \n");
	scanf("%d%d%f",&Principal, &Time, &Rate);
	SI=Principal*Rate*Time/100 ;
	printf("%f", SI);
	return 0;
}
