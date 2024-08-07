#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0;
    int spaceCount = 0;
    int tabCount = 0;
    int newlineCount = 0;

    // Open the file for reading
    file = fopen("your_file.txt", "r");

    // Check if the file exists
    if (file == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == ' ') {
            spaceCount++;
        } else if (ch == '\t') {
            tabCount++;
        } else if (ch == '\n') {
            newlineCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("Character Count: %d\n", charCount);
    printf("Space Count: %d\n", spaceCount);
    printf("Tab Count: %d\n", tabCount);
    printf("Newline Count: %d\n", newlineCount);

    return 0;
}
