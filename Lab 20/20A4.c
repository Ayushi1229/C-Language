#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[50];
    int age;
    double percentage;
};
int main()
{
    struct Student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter details of the student %d\n",i+1);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Age: ");
        scanf("%d",s[i].age);
        printf("Percentage: ");
        scanf("%lf",s[i].percentage);
    }
         printf("\nDetails of the students:\n");
        for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Percentage: %.2lf\n", s[i].percentage);
        return 0;
}
}
