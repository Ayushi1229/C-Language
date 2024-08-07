#include <stdio.h>
#include <string.h>

int findChar(char *str, char ch) 
{
    char *ptr = strchr(str, ch);
    if(ptr != NULL) 
    {
        return ptr - str;
    }
     else
    {
        return -1;
    }
}

int main()
 {
    char str[100], ch;
    int pos;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    pos = findChar(str, ch);
    if(pos != -1)
    {
        printf("Character '%c' is found at position %d\n", ch, pos);
    } 
    else 
    {
        printf("Character '%c' is not found\n", ch);
    }

    return 0;
}