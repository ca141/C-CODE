//C program to perform  basic text file operations 
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 200
#define FILE_NAME "output.txt"

// Function to write a paragraph to the file
void writeToFile() {
    FILE *file = fopen(FILE_NAME, "a"); // Open file in append mode
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char paragraph[MAX_LENGTH];
    printf("Enter a paragraph (up to 200 characters):\n");
    fgets(paragraph, MAX_LENGTH, stdin);

    if (fprintf(file, "%s", paragraph) < 0) {
        perror("Error writing to file");
    } else {
        printf("Paragraph written to file successfully.\n");
    }

    fclose(file);
}

// Function to read content from the file without deleting original content
void readFromFile() {
    FILE *file = fopen(FILE_NAME, "r"); // Open file in read mode
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char ch;
    printf("Content of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}