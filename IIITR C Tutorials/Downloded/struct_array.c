#include<stdio.h>
struct student{
 char name[100];
 int roll;
 float marks;
};
int main()
{
 struct student s[5];
 int i;
 float avg=0;
 printf("enter the name, roll no, and marks of 5 students.\n");
 for(i=0;i<5;i++)
 {
 scanf("%s",s[i].name);
 scanf("%d",&s[i].roll);
 scanf("%f",&s[i].marks);
 avg+=s[i].marks;
}
avg/=5;
printf("details of the students are: \n");
for(i=0;i<5;i++)
 {
 printf("%s\n",s[i].name);
 printf("%d\n",s[i].roll);
 printf("%f\n",s[i].marks);
}
printf("average marks of the classn are: %f\n",avg);
 printf("Size of structure is: %d\n",sizeof(s));
 return 0;
 
}
