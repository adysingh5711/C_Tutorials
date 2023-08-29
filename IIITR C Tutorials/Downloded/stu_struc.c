#include<stdio.h>
struct student{
 char name[101];
 int roll;
 double marks;
}s1;
int main()
{
 
 printf("enter the name, roll no, and marks\n");
 scanf("%s",&s1.name);
 scanf("%d",&s1.roll);
 scanf("%d",&s1.marks);
 printf("Name: %s",s1.name);
 printf("Roll  no. %d",s1.roll);
 printf("marks %d",s1.marks);
 printf("Size of structure is: %d",sizeof(s1));
 return 0;
 
}
