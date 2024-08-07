#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[50];

    // strlen()
    printf("Length of str1: %d\n", strlen(str1));


    // strcmp()
    if(strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // strcpy()
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // strcat()
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strrev()
    printf("Reversed string: %s\n", strrev(str1));

    // strlwr()
    printf("Lowercase string: %s\n", strlwr(str1));

    // strupr()
    printf("Uppercase string: %s\n", strupr(str1));

    return 0;
}