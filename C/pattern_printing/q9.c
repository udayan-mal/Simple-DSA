// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C 
//         *           |           1           |           A
//       * * *         |         1 2 3         |         A B C
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I

#include <stdio.h>

int main()
{
    int rows = 5;

    // Outer loop to iterate each row
    for (int i = 0; i < 2 * rows - 1; i++)
    {

        // Assigning comparator
        int comp;
        if (i < rows)
            comp = 2 * i + 1;
        else
            comp = 2 * (2 * rows - i) - 3;

        // First inner loop to print leading spaces
        for (int j = 0; j < comp; j++)
            printf(" ");

        // Second inner loop to print star *
        for (int k = 0; k < 2 * rows - comp; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
//Hourglass Pattern is a combination of the inverted full pyramid and full pyramid patterns 
// but in the opposite sense to that of diamond pattern. Here we join them using their tip.