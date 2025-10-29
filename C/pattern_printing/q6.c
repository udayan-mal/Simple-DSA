// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C
//         *           |           1           |           A

#include <stdio.h>

int main()
{
    int rows = 5;

    // Outer loop for printing all rows
    for (int i = 0; i < rows; i++)
    {

        // First inner loop printing leading white spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // Second inner loop printing stars *
        for (int k = 0; k < 2 * (rows - i) - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//It is a 180° flipped version of the Full Pyramid Pattern we discussed earlier. 
// We can see this as the combination of the Inverted Left Half and Inverted Right Half Pyramid Pattern.