
#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "data.dat"

// Define the structure for the array members
typedef struct {
    int id;
    char name[50];
    float salary;
} Member;

int main() {
    // Define the array of structures
    Member members[10];

    // Read the array from the file
    FILE *file = fopen(FILE_NAME, "rb");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read the array from the file
    int size = sizeof(members[0]);
    int count = fread(members, size, 1, file);
    if (ferror(file)) {
        printf("Error reading file\n");
        fclose(file);
        return 1;
    }

    // Display the array on the screen
    printf("Members:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", members[i].id, members[i].name, members[i].salary);
    }

    // Close the file
    fclose(file);

    return 0;
}
    