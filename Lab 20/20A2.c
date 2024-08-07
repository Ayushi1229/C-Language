#include<stdio.h>
struct Book
{
    char title[50];
    char author[50];
    char publication[50];
    float price;
};
int main()
{
    struct Book b[3];
    int i;

    for (i = 0; i < 3; ++i) {
        printf("Enter the details of book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", b[i].title);
        printf("Author: ");
        scanf("%s", b[i].author);
        printf("Publication: ");
        scanf("%s", b[i].publication);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\nDisplaying the details of all books:\n");
    for (i = 0; i < 3; ++i) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Publication: %s\n", b[i].publication);
        printf("Price: %.2f\n", b[i].price);
    
}
    return 0;
}
    

