#include <stdio.h>
#include <string.h>

union student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    union student s;

    // Input data of one student
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Name: %s\n", s.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s.roll);
    printf("Roll number: %d \n", s.roll);
    printf("Enter the marks of the student: ");
    scanf("%f", &s.marks);
    printf("Marks: %f \n", s.marks);
 

    // Find the size of the union student
    printf("Size of union student: %ld bytes\n", sizeof(s));

    // Create an array of 5 students (created using union)
    union student arr[5];

    // Find the size of the array student (created using union)
    printf("Size of array student: %ld bytes\n", sizeof(arr));

    return 0;
}

//In this program, we define a union student that contains three fields - name, roll, and marks. We then input the data of one student using scanf() and display it using printf(). We also find the size of the union student using sizeof().
//
//We then create an array of 5 students using union student arr[5] and find the size of the array student using sizeof(). Note that since all the fields of the union have the same memory location, the size of the union is equal to the size of its largest field (which in this case is name, with a size of 50 bytes). Similarly, the size of the array student is equal to the size of one element of the array (which is the same as the size of the union student).

