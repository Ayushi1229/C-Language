#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("file1.c","r");
    fp2=fopen("file2.c","w");
    do
    {
        ch = getc(fp1);
        putc(ch, fp2);
    }
    while(ch != EOF);
    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully...");
}