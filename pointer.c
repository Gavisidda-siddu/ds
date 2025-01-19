#include <stdio.h>

int main() {
    int array[3][4];
    int (*p)[4] = array; // Pointer to an array of 4 integers
    int i, j;

    // Reading elements of the 2D array using pointers
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &(*p)[j]); // Using pointer to access elements
        }
        p++; // Move to the next row
    }

    // Printing the 2D array to verify input
    p = array; // Reset pointer to the start of the array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", (*p)[j]); // Using pointer to access
