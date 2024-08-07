#include <stdio.h>
#include <string.h>

void replaceChar(char *str, char c1, char c2)
 {
    int i;
    for(i = 0; i < strlen(str); i++) 
    {
        if(str[i] == c1) 
        {
            str[i] = c2;
        }
    }
}

int main()
{
    char str[100], c1, c2;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to be replaced: ");
    scanf("%c", &c1);

    printf("Enter the new character: ");
    scanf(" %c", &c2);

    replaceChar(str, c1, c2);

    printf("New string: %s", str);

    return 0;
}