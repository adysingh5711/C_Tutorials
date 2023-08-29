#include <stdio.h>
int main()
{
int i=12;
i=i++ - --i + ++i;
printf("i is %d \n \n",i);
int z=12;
z=--z+z--;
printf("z is %d",z);
	return 0;
}
