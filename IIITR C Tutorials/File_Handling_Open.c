#include <stdio.h>
main()
{
    FILE *fp;
    char input[25];
    printf("Input the string to be written in the file \n");
    gets(input);
    fp = fopen("F:'.\C Language\IIITR C Tutorials\File_Handling_Open.txt'", "w");
    fprintf(fp, input);
    fclose(fp);
}