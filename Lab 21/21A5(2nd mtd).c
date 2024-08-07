#include <stdio.h>

int main() {
    FILE *source_file, *destination_file;
    char ch;

    // Open source file for reading
    source_file = fopen("source.txt", "r");

    // Open destination file for writing
    destination_file = fopen("destination.txt", "w");

    // Copy contents of source file to destination file
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    // Close files
    fclose(source_file);
    fclose(destination_file);

    return 0;
}
