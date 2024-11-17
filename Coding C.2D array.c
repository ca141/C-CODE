//array data structure 
#include <stdio.h>

int main() {
    // Declaring and initializing the 2D array
    int scores[2][2][2] = {
        {{65, 92}, {35, 70}},
        {{84, 72}, {59, 67}}
    };

    // Printing the elements using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("scores[%d][%d][%d] = %d\n", i, j, k, scores[i][j][k]);
            }
        }
    }

    return 0;
}