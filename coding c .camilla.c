
#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 5

int main() {
    FILE *file;
    char names[MAX_STUDENTS][50];
    int marks[MAX_STUDENTS][10];
    int i, j;

    // Open the file for writing
    file = fopen("students.dat", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read the names and marks of 5 students
    printf("Enter the name and marks of 5 students:\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        fgets(names[i], 50, stdin);
        printf("Marks: ");
        for (j = 0; j < 10; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Write the names and marks to the file
    for (i = 0; i < MAX_STUDENTS; i++) {
        fprintf(file, "%s %d %d %d %d %d\n", names[i], marks[i][0], marks[i][1], marks[i][2], marks[i][3], marks[i][4]);
    }

    // Close the file
    fclose(file);

    printf("Names and marks saved to students.dat\n");
    return 0;
}
