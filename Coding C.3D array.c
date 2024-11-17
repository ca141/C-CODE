//an array data structure
#include <stdio.h>

int main() {
    // Declare and initialize a 3D array named scores
    int scores[3][2][2] = {
        {{33, 52}, {10, 12}},
        {{45, 98}, {35, 60}},
        {{84, 76}, {80, 42}}
    };

    // Print the elements of the 3D array using nested for loops
    printf("Elements of the 3D array 'scores':\n");
    for (int i = 0; i < 3; i++) {       // Loop through the rows
        for (int j = 0; j < 2; j++) {   // Loop through the columns
            for (int k = 0; k < 2; k++) { // Loop through depth
                printf("scores[%d][%d][%d] = %d\n", i, j, k, scores[i][j][k]);
            }
        }
    }

    return 0;
}