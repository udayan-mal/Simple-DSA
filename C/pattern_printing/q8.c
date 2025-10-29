//         *           |           1           |           A
//       * * *         |         1 2 3         |         A B C
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C
//         *           |           1           |           A

#include <stdio.h>

int main()
{
    int n = 5;

    // Outer loop to iterate through each row
    for (int i = 0; i < 2 * n - 1; i++)
    {

        // assigning values to the comparator according to the row number
        int comp;
        if (i < n)
            comp = 2 * (n - i) - 1;
        else
            comp = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++)
            printf(" ");

        // Second inner loop to print stars *
        for (int k = 0; k < 2 * n - comp; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}


//The Diamond Pattern is obtained by joining the Full Pyramid and Inverted Full Pyramid Pattern by their bases. We can also print this pattern using any character.