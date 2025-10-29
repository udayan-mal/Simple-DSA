//         *    |            1    |            A
//       * *    |          1 2    |          A B
//     * * *    |        1 2 3    |        A B C
//   * * * *    |      1 2 3 4    |      A B C D
// * * * * *    |    1 2 3 4 5    |    A B C D E

#include <stdio.h>

int main()
{
    int rows = 5;

    // This loop for traverse pyramid from top to bottom
    for (int i = 0; i < rows; i++)
    {

        // This loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }

        // This loop for printing * character in each row
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//The Left Half Pyramid looks like a right-angled triangle with its hypotenuse facing the left. 
// We can also print this pattern using a character, alphabets, or numbers.




