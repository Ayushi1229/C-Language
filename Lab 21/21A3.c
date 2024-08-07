#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open file for writing
    fp = fopen("example.txt", "w");

    // Write to file using fprintf()
    fprintf(fp, "This is some text that we're writing to the file.\n");

    // Close file
    fclose(fp);

    // Open file for reading
    fp = fopen("example.txt", "r");

    // Read from file using fscanf()
    fscanf(fp, "%s", &ch);

    // Print the character read from file
    printf("Character read from file: %c\n", ch);

    // Close file
    fclose(fp);

    // Open file for writing
    fp = fopen("example.txt", "w");

    // Write to file using fputc()
    fputc('A', fp);

    // Close file
    fclose(fp);

    // Open file for reading
    fp = fopen("example.txt", "r");

    // Read from file using fgetc()
    ch = fgetc(fp);

    // Print the character read from file
    printf("Character read from file: %c\n", ch);

    // Close file
    fclose(fp);

    // Open file for writing
    fp = fopen("example.txt", "w");

    // Write to file using fprintf()
    fprintf(fp, "This is some text that we're writing to the file.\n");

    // Move file pointer to the beginning of the file
    fseek(fp, 0, SEEK_SET);

    // Read from file using fgetc()
    ch = fgetc(fp);

    // Print the character read from file
    printf("Character read from file: %c\n", ch);

    // Close file
    fclose(fp);

    return 0;
}
