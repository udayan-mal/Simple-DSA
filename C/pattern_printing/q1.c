// *           |   1           |   A
// * *         |   1 2         |   A B
// * * *       |   1 2 3       |   A B C
// * * * *     |   1 2 3 4     |   A B C D
// * * * * *   |   1 2 3 4 5   |   A B C D E

#include <stdio.h>

int main() {
    int rows = 5;

    // This loop for traverse
    // pyramid from top to bottom
    for (int i = 0; i < rows; i++) {

        // Inner loop for printing 
        // character in each rows
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//The right-half pyramid is nothing but 
// a right-angle triangle whose hypotenuse is in the right direction.
//  We can print the right half pyramid pattern using numbers, alphabets, or any other character like a star