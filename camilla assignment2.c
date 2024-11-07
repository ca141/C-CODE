
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME 50
#define MAX_MARKS 10

int main() {
    FILE *file;
    char filename[50];
    char names[MAX_STUDENTS][MAX_NAME];
    int marks[MAX_STUDENTS];
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read the names and marks of the students
    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Open the file for appending
    file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Write the names and marks to the file
    for (i = 0; i < n; i++) {
        fprintf(file, "%s %d\n", names[i], marks[i]);
    }

    // Close the file
    fclose(file);

    printf("Information saved to students.txt\n");
    return 0;
}