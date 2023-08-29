#include <stdio.h>
int main()
{
	int m1, m2, m3, m4, m5;
	float per;
	printf("Enter the marks in five subjects \n");
	scanf ("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
	per=(m1+m2+m3+m4+m5)*100/50;
	printf("Percentage is %f \n",per);
	if(per>60)
	printf("First division \n");
	if((per>50) && (per <=60))
	printf("Second division \n");
	if((per>40) && (per <=50))
	printf("Third division \n");
	if(per <=40)
	printf("Fail \n");

	return 0;
}
