#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Set the number of rows for the diamond pattern
    rows = 5;  // You can change this value as needed

    // Print the top half of the diamond
    for (i = 1; i <= rows; ++i) {
        // Print spaces for indentation
        for (space = 1; space <= rows - i; ++space) {
            printf(" ");
        }

        // Print asterisks for the left side of the diamond
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    // Print the bottom half of the diamond
    for (i = rows - 1; i >= 1; --i) {
        // Print spaces for indentation
        for (space = 1; space <= rows - i; ++space) {
            printf(" ");
        }

        // Print asterisks for the left side of the diamond
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

